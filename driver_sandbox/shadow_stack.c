//============================ followling code should be kept in TCB======================= 


unsigned long shadow_stack[500];
unsigned int curr_sp_shadow_stack = 0;


void shadow_stack_save(unsigned long lr_value){
    shadow_stack[curr_sp_shadow_stack++] = lr_value;
}


unsigned long shadow_stack_restore(){
    return shadow_stack[--curr_sp_shadow_stack];
}
