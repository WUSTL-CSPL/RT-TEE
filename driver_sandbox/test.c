// extern int f();

#include "stdio.h"
#include "stdlib.h"

int g() 
{
    int ret = 0;

    // ret = shadow_stack();
    shadow_stack();


    // volatile("" : : : "memory");

    int loop_result = 0;
    int cnt = 1;

    __asm__ __volatile__(
                "mov x1, %1 \n\t" //iterations times
                :"=r" (loop_result)
                :"r" (cnt)
                :"x0", "x1", "x2", "x3"
            );


    goto out;
    ret = 1;

out:

    return ret;
}


int shadow_stack(){
    return 0;
}

int prologue_oprt(){

    printf("prologue operation\n");
    return 0;
}

int epologue_oprt(){
    printf("epologue_oprt\n");
    return 0;
}


int main(){
    printf("hellow sandbox\n");
    return 0;
}