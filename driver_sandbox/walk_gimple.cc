#include <iostream>

// This is the first gcc header to be included
#include "gcc-plugin.h"
#include "plugin-version.h"

#include "tree-pass.h"
#include "context.h"
#include "function.h"
#include "tree.h"
#include "tree-ssa-alias.h"
#include "internal-fn.h"
#include "is-a.h"
#include "predict.h"
#include "basic-block.h"
#include "gimple-expr.h"
#include "gimple.h"
#include "gimple-pretty-print.h"
#include "gimple-iterator.h"
#include "gimple-walk.h"
#include "stdio.h"
#include "stdlib.h"
#include "rtl.h"
#include "emit-rtl.h"
#include "line-map.h"
#include "genrtl.h"
#include <string>
#include <list>
// #include "optabs-libfuncs.h"

// We must assert that this plugin is GPL compatible
int plugin_is_GPL_compatible;

static struct plugin_info my_gcc_plugin_info = { "1.0", "This is a very simple plugin" };


namespace
{
    const pass_data my_first_pass_data = 
    {
        GIMPLE_PASS,
        "my_first_pass",        /* name */
        OPTGROUP_NONE,          /* optinfo_flags */
        TV_NONE,                /* tv_id */
        PROP_gimple_any,        /* properties_required */
        0,                      /* properties_provided */
        0,                      /* properties_destroyed */
        0,                      /* todo_flags_start */
        0                       /* todo_flags_finish */
    };

    struct my_first_pass : gimple_opt_pass
    {
        my_first_pass(gcc::context *ctx)
            : gimple_opt_pass(my_first_pass_data, ctx)
        {
        }

        virtual unsigned int execute(function *fun) override
        {
            // fun is the current function being called
            gimple_seq gimple_body = fun->gimple_body;

            struct walk_stmt_info walk_stmt_info;
            memset(&walk_stmt_info, 0, sizeof(walk_stmt_info));

            walk_gimple_seq(gimple_body, callback_stmt, callback_op, &walk_stmt_info);

            // Nothing special todo
            return 0;
        }

        virtual my_first_pass* clone() override
        {
            // We do not clone ourselves
            return this;
        }

        private:

        static tree callback_stmt(gimple_stmt_iterator * gsi, bool *handled_all_ops, struct walk_stmt_info *wi)
        {
            gimple* g = (gimple*)gsi_stmt(*gsi);

            // location_t l = gimple_location((const_gimple)g);
            // enum gimple_code code = gimple_code((const_gimple)g);

            location_t l = gimple_location(g);
            enum gimple_code code = gimple_code(g);            

            fprintf(stderr, "Statement of type: %s at %s:%d\n",
                    gimple_code_name[code],
                    LOCATION_FILE(l),
                    LOCATION_LINE(l));

            return NULL;
        }

        static tree callback_op(tree *t, int *, void *data)
        {
            enum tree_code code = TREE_CODE(*t);

            fprintf(stderr, "   Operand: %s\n", get_tree_code_name(code));
            return NULL;
        }
    };


    const pass_data pass_epologue_instrument = { 
        RTL_PASS, /* type */
        "epol_inst_pass", /* name */
        OPTGROUP_NONE, /* optinfo_flags */
        TV_NONE, /* tv_id */
        // (PROP_ssa | PROP_gimple_leh | PROP_cfg | PROP_gimple_lcx | PROP_gimple_lvec | PROP_gimple_lva), /* properties_required */
        (PROP_ssa | PROP_gimple_any | PROP_cfg),
        0, /* properties_provided */
        0, /* properties_destroyed */
        0,  //todo_flags_start 
        0, /* todo_flags_finish */
    };

    /* Description of RTL pass.  */

    struct epol_inst_pass : rtl_opt_pass{

        epol_inst_pass(gcc::context *ctx)
            : rtl_opt_pass(pass_epologue_instrument, ctx)
        {    
        } 

        virtual unsigned int execute (function *);

    };

}


int prologue_oprt(){

    printf("prologue operation\n");
    return 0;
}

int epologue_oprt(){

    printf("epologue_oprt\n");
    return 0;
}


unsigned long shadow_stack[500];
unsigned int curr_sp_shadow_stack = 0;


void shadow_stack_save(unsigned long lr_value){
    shadow_stack[curr_sp_shadow_stack++] = lr_value;
}

unsigned int epol_inst_pass::execute (function *fun)
{


    std::string ss_save = "shadow_stack_save";
    std::string ss_restore = "shadow_stack_restore";

    //filter shadow stack operation trampoline function
    if(IDENTIFIER_POINTER(DECL_NAME(fun->decl)) == ss_save || \
        IDENTIFIER_POINTER(DECL_NAME(fun->decl)) == ss_restore){
        return 0;
    }


    //filter driver functions to be sandboxed
    int flag_to_be_sfi = 0;

    rtx_insn *filter_insn;

    for(filter_insn = get_insns(); filter_insn != get_last_insn(); filter_insn = NEXT_INSN(filter_insn)){

        if(GET_CODE(filter_insn) == JUMP_INSN){
            if (INSN_HAS_LOCATION (filter_insn)){
                expanded_location xloc = insn_location (filter_insn);
                // std::cerr << xloc.file << ":" << std::to_string(xloc.line) << std::endl;
                std::string location = xloc.file;
                std::string target_file = "pta_spi_transfer_one.c";
                int n = 0;
                if((n = location.find(target_file)) > 0){
                    flag_to_be_sfi = 1;
                    break;
                }
            }             
        }
      
    }

    if(flag_to_be_sfi == 0){
        return 0;
    }

    rtx_insn *insn;

    std::list<rtx_insn*> to_be_remove;

    //instrument write
    for(insn = get_insns(); insn!=get_last_insn(); insn = NEXT_INSN(insn)){
        if(GET_CODE(insn) == INSN){

            //get set expression

            rtx set_rtx = XEXP(insn,3);
            if(GET_CODE(set_rtx) == SET){
                // print_rtl_single(stderr, set_rtx);
                //get the first operand in set rtl expression, address of write instruction
                rtx mem_rtx = XEXP(set_rtx,0);
                //get the second operand in set rtl expression, value of write instruction
                rtx value_rtx = XEXP(set_rtx, 1);
                if(GET_CODE(mem_rtx) == MEM){

                    rtx insert_value_rtx = value_rtx;
                    rtx insert_mem_rtx = mem_rtx;

                    //save x0
                    start_sequence();

                    rtx dec_sp, mem_sp, push_x0, push_insn;


                    rtx minus_insn, minus_sp;
                    //sub sp, sp, #16 (64 bits aligned)
                    minus_sp = gen_rtx_SET(stack_pointer_rtx, gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(-16)));
                    minus_insn = emit_insn(minus_sp);

                    //str x0, [sp]
                    push_x0 = gen_rtx_SET(gen_rtx_MEM(DImode, stack_pointer_rtx), gen_rtx_REG(DImode, 0));
                    push_insn = emit_insn_after(push_x0, minus_insn);           


                    //filter context saving instructions
                    rtx mem_add_rtx = XEXP(insert_mem_rtx, 0);
                    if(GET_CODE(mem_add_rtx) == PRE_DEC){
                        // std::cerr << "PRE_DEC" << std::endl;
                        end_sequence();
                        continue;
                    }
                    //mov address value into x0
                    rtx mov_add = gen_rtx_SET(gen_rtx_REG(DImode,0), mem_add_rtx);


                    // filter scratch

                    if(GET_CODE(mem_add_rtx) == SCRATCH){

                        end_sequence();
                        continue;
                    }

                    rtx mov_add_insn = emit_insn_after(mov_add, push_insn);             

                    //masking address in x0 and store it in x25
                    //bfxil x25, x0, #0, #12



                    rtx mask = gen_rtx_ASM_OPERANDS(VOIDmode, "bfxil x25, x0, #0, #64", \
                        "", 0, rtvec_alloc (0), rtvec_alloc (0), rtvec_alloc (0), \
                        expand_location(RTL_LOCATION(insn)).line);
                    rtx mask_insn = emit_insn_after(mask, mov_add_insn);
                    
                    // ldr x0, [sp]
                    rtx ldr_x0_insn, ldr_x0_rtx;
                    ldr_x0_rtx = gen_rtx_SET(gen_rtx_REG(DImode, 0), gen_rtx_MEM(DImode, stack_pointer_rtx));
                    ldr_x0_insn = emit_insn_after(ldr_x0_rtx, mask_insn);


                    //add sp, sp, #16
                    rtx plus_insn, plus_sp;
                    plus_sp = gen_rtx_SET(stack_pointer_rtx, \
                        gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(16)));                
                    plus_insn = emit_insn_after(plus_sp, ldr_x0_insn);


                    rtx push_x0_seq;
                    push_x0_seq = get_insns();
                    end_sequence();
                    emit_insn_before(push_x0_seq, insn);
                    //restore x0

                    //set insn to be emitted
                    rtx insert_set_rtx = gen_rtx_SET(gen_rtx_raw_MEM(GET_MODE(mem_rtx),gen_rtx_REG(DImode,25)), \
                        insert_value_rtx);

                    start_sequence();
                    emit_insn(insert_set_rtx);
                    rtx insert_mem_seq = get_insns();
                    end_sequence();
                    
                    //this is used
                    emit_insn_after(insert_mem_seq, plus_insn);
                    
                    to_be_remove.push_back(insn);

                }

            }

        }


    }

    for(insn = get_insns(); insn!=get_last_insn(); insn = NEXT_INSN(insn)){


        //this used to find out prologue and epologue
        if(GET_CODE(insn) == NOTE){
          
            rtunion note_data = NOTE_DATA(insn);
            enum insn_note note = (enum insn_note)NOTE_KIND(insn);
            
            //instrument prologue to insert shadow stack saving 
            if(note == NOTE_INSN_PROLOGUE_END){

                // following codes can insert function call into rtl

                //emit context x0 saving and restoring codes
                start_sequence();
                rtx seq;

                //push rx
                rtx dec_sp, mem_sp, push_x0, push_insn;


                rtx minus_insn, minus_sp;
                //sub sp, sp, #16 (64 bits aligned)
                minus_sp = gen_rtx_SET(stack_pointer_rtx, \
                    gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(-16)));
                minus_insn = emit_insn_after(minus_sp, insn);

                //str lr, [sp]
                rtx push_lr_insn, push_lr_rtx;
                push_lr_rtx = gen_rtx_SET(gen_rtx_MEM(DImode, stack_pointer_rtx), gen_rtx_REG(DImode, 30));
                push_lr_insn = emit_insn_after(push_lr_rtx, minus_insn);


                //str x0, [sp]
                push_x0 = gen_rtx_SET(gen_rtx_MEM(DImode, gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(8))), gen_rtx_REG(DImode, 0));
                push_insn = emit_insn_after(push_x0, push_lr_insn);


                //replace post_inc with two separate instruction

                //ldr lr, [sp]
                rtx ldr_lr_insn, ldr_lr_rtx;
                ldr_lr_rtx = gen_rtx_SET(gen_rtx_REG(DImode, 30), gen_rtx_MEM(DImode, stack_pointer_rtx));
                ldr_lr_insn = emit_insn_after(ldr_lr_rtx, push_insn);

                rtx pop_insn, pop_mem_sp, inc_sp, pop_x0;                
                //ldr x0, [sp+8]
                pop_x0 = gen_rtx_SET(gen_rtx_REG(DImode, 0), gen_rtx_MEM(DImode, \
                    gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(8))));
                pop_insn = emit_insn_after(pop_x0, ldr_lr_insn);

                //add sp, sp, #16
                rtx plus_insn, plus_sp;
                plus_sp = gen_rtx_SET(stack_pointer_rtx, \
                    gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(16)));                
                plus_insn = emit_insn_after(plus_sp, pop_insn);

                seq = get_insns();
                end_sequence();
                emit_insn_after(seq, insn);

                //emit shadow stack saving function call
                start_sequence();
                rtx internal_seq;
                emit_library_call(gen_rtx_SYMBOL_REF(Pmode, "shadow_stack_save"), LCT_NORMAL,
                              VOIDmode, 1, gen_rtx_REG(Pmode, 30), Pmode);  
                internal_seq = get_insns();
                end_sequence();
                emit_insn_after(internal_seq, push_insn);
                //end commend
            }

        }


        //instrument epilogue to insert shadown stack restoring
        if(GET_CODE(insn) == JUMP_INSN){


            rtx internal_exp = XEXP(insn,3);

            switch(GET_CODE(internal_exp)){
                case SIMPLE_RETURN:
                case RETURN:{

                    start_sequence();

                    //push x0
                    rtx dec_sp, mem_sp, push_x0, push_insn;  


                    rtx minus_insn, minus_sp;
                    //sub sp, sp, #16 (64 bits aligned)
                    minus_sp = gen_rtx_SET(stack_pointer_rtx, gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(-16)));
                    minus_insn = emit_insn(minus_sp);

                    //str x0, [sp]
                    push_x0 = gen_rtx_SET(gen_rtx_MEM(DImode, stack_pointer_rtx), gen_rtx_REG(DImode, 0));
                    push_insn = emit_insn_after(push_x0, minus_insn);


                    // mov lr, x0
                    rtx mov_rtl, mov_insn, mov_seq;
                    mov_rtl = gen_rtx_SET(gen_rtx_REG(DImode,30), gen_rtx_REG(DImode,0));
                    mov_insn = emit_insn_after(mov_rtl, push_insn);


                    // ldr x0, [sp]
                    rtx ldr_x0_insn, ldr_x0_rtx;
                    ldr_x0_rtx = gen_rtx_SET(gen_rtx_REG(DImode, 0), gen_rtx_MEM(DImode, stack_pointer_rtx));
                    ldr_x0_insn = emit_insn_after(ldr_x0_rtx, mov_insn);


                    //add sp, sp, #16
                    rtx plus_insn, plus_sp;
                    plus_sp = gen_rtx_SET(stack_pointer_rtx, \
                        gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(16)));                
                    plus_insn = emit_insn_after(plus_sp, ldr_x0_insn);


                    rtx push_x0_seq;
                    push_x0_seq = get_insns();
                    end_sequence();
                    emit_insn_before(push_x0_seq, insn);


                    //bl shadown stack return address restoring

                    start_sequence();
                    rtx internal_seq;
                    emit_library_call_value(gen_rtx_SYMBOL_REF(Pmode, "shadow_stack_restore"),\
                        gen_rtx_REG(DImode, 0), LCT_CONST, VOIDmode, 0); 
                    internal_seq = get_insns();
                    end_sequence();
                    emit_insn_before(internal_seq, mov_insn);

                    break;
                }
                default:
                    break;
            }
        }

        continue;


        if(GET_CODE(insn) == INSN){

            //get set expression

            rtx set_rtx = XEXP(insn,3);
            if(GET_CODE(set_rtx) == SET){
                //get the first operand in set rtl expression, address of write instruction
                rtx mem_rtx = XEXP(set_rtx,0);
                //get the second operand in set rtl expression, value of write instruction
                rtx value_rtx = XEXP(set_rtx, 1);
                if(GET_CODE(mem_rtx) == MEM){

                    rtx insert_value_rtx = value_rtx;
                    rtx insert_mem_rtx = mem_rtx;

                    //save x0
                    start_sequence();

                    rtx dec_sp, mem_sp, push_x0, push_insn;


                    rtx minus_insn, minus_sp;
                    //sub sp, sp, #16 (64 bits aligned)
                    minus_sp = gen_rtx_SET(stack_pointer_rtx, gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(-16)));
                    minus_insn = emit_insn(minus_sp);

                    //str x0, [sp]
                    push_x0 = gen_rtx_SET(gen_rtx_MEM(DImode, stack_pointer_rtx), gen_rtx_REG(DImode, 0));
                    push_insn = emit_insn_after(push_x0, minus_insn);           

                    //filter context saving instructions
                    rtx mem_add_rtx = XEXP(insert_mem_rtx, 0);
                    if(GET_CODE(mem_add_rtx) == PRE_DEC){
                        // std::cerr << "PRE_DEC" << std::endl;
                        end_sequence();
                        continue;
                    }
                    //mov address value into x0
                    rtx mov_add = gen_rtx_SET(gen_rtx_REG(DImode,0), mem_add_rtx);
                    
                    // filter scratch

                    if(GET_CODE(mem_add_rtx) == SCRATCH){
                        end_sequence();
                        continue;
                    }

                    rtx mov_add_insn = emit_insn_after(mov_add, push_insn);             

                    //masking address in x0 and store it in x25
                    //bfxil x25, x0, #0, #12
                    
         


                    //for debug
                    rtx mask = gen_rtx_SET(gen_rtx_REG(DImode, 25), gen_rtx_REG(DImode, 0));
                    rtx mask_insn = emit_insn_after(mask, mov_add_insn);

                    
                    // ldr x0, [sp]
                    rtx ldr_x0_insn, ldr_x0_rtx;
                    ldr_x0_rtx = gen_rtx_SET(gen_rtx_REG(DImode, 0), gen_rtx_MEM(DImode, stack_pointer_rtx));
                    ldr_x0_insn = emit_insn_after(ldr_x0_rtx, mask_insn);


                    //add sp, sp, #16
                    rtx plus_insn, plus_sp;
                    plus_sp = gen_rtx_SET(stack_pointer_rtx, \
                        gen_rtx_PLUS(DImode, stack_pointer_rtx, GEN_INT(16)));                
                    plus_insn = emit_insn_after(plus_sp, ldr_x0_insn);


                    rtx push_x0_seq;
                    push_x0_seq = get_insns();
                    end_sequence();
                    emit_insn_before(push_x0_seq, insn);
                    //restore x0

                    //set insn to be emitted
                    rtx insert_set_rtx = gen_rtx_SET(gen_rtx_raw_MEM(GET_MODE(mem_rtx),gen_rtx_REG(DImode,25)), \
                        insert_value_rtx);



                    start_sequence();
                    emit_insn(insert_set_rtx);
                    rtx insert_mem_seq = get_insns();
                    end_sequence();

                    
                    emit_insn_after(insert_mem_seq, plus_insn);
                    
                    to_be_remove.push_back(insn);

                }

            }

        }

        continue;

    }
    
    //remove original write instruction whose address is to be masked
    std::list<rtx_insn*>::iterator iter;
    for(iter = to_be_remove.begin(); iter != to_be_remove.end(); iter++){
        remove_insn(*iter);
    }

    return 0;
}


int plugin_init (struct plugin_name_args *plugin_info,
        struct plugin_gcc_version *version)
{
    // We check the current gcc loading this plugin against the gcc we used to
    // created this plugin
    if (!plugin_default_version_check (version, &gcc_version))
    {
        std::cerr << "This GCC plugin is for version " << GCCPLUGIN_VERSION_MAJOR << "." << GCCPLUGIN_VERSION_MINOR << "\n";
        return 1;
    }

    register_callback(plugin_info->base_name,
            /* event */ PLUGIN_INFO,
            /* callback */ NULL, /* user_data */ &my_gcc_plugin_info);

    // Register the phase right after omplower
    struct register_pass_info pass_info;

    // Note that after the cfg is built, fun->gimple_body is not accessible
    // anymore so we run this pass just before the cfg one
    pass_info.pass = new my_first_pass(g);
    pass_info.reference_pass_name = "cfg";
    pass_info.ref_pass_instance_number = 1;
    pass_info.pos_op = PASS_POS_INSERT_BEFORE;

    // register_callback (plugin_info->base_name, PLUGIN_PASS_MANAGER_SETUP, NULL, &pass_info);


    struct register_pass_info epo_pass_info;
    // register epolog pass after pro_and_epilogue pass
    epo_pass_info.pass = new epol_inst_pass(g);
    // epo_pass_info.reference_pass_name = "pro_and_epilogue"; // hook this pass with ssa builder pass
    epo_pass_info.reference_pass_name = "sched2"; // hook this pass with ssa builder pass
    // epo_pass_info.reference_pass_name = "final"; // hook this pass with ssa builder pass
    epo_pass_info.ref_pass_instance_number = 1; // Insert the pass at the specified        
    epo_pass_info.pos_op = PASS_POS_INSERT_AFTER; // After SSA is built

    register_callback(plugin_info->base_name, PLUGIN_PASS_MANAGER_SETUP, NULL, &epo_pass_info);

    return 0;
}
