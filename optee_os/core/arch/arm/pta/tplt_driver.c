#include <compiler.h>
#include <kernel/pseudo_ta.h>
#include <kernel/panic.h>
#include <mm/core_memprot.h>
#include <pta_invoke_tests.h>
#include <string.h>
#include <tee/cache.h>
#include <tee_api_defines.h>
#include <tee_api_types.h>
#include <trace.h>
#include <types_ext.h>
#include <kernel/timer.h>

#include "core_self_tests.h"

#include "tee_schedule.h"

#include <stdint.h>
#include <stddef.h>
#include <io.h>

#if defined(__GNUC__)
#define FORCEDINLINE  __attribute__((always_inline))
#else 
#define FORCEDINLINE
#endif

//I2C driver
#define BCM2835_I2C_C		0x0
#define BCM2835_I2C_S		0x4
#define BCM2835_I2C_DLEN	0x8
#define BCM2835_I2C_A		0xc
#define BCM2835_I2C_FIFO	0x10
#define BCM2835_I2C_DIV		0x14
#define BCM2835_I2C_DEL		0x18
#define BCM2835_I2C_CLKT	0x1c


#define BCM2835_I2C_C_READ	BIT(0)
#define BCM2835_I2C_C_CLEAR	BIT(4) /* bits 4 and 5 both clear */
#define BCM2835_I2C_C_ST	BIT(7)
#define BCM2835_I2C_C_INTD	BIT(8)
#define BCM2835_I2C_C_INTT	BIT(9)
#define BCM2835_I2C_C_INTR	BIT(10)
#define BCM2835_I2C_C_I2CEN	BIT(15)

#define BCM2835_I2C_S_TA	BIT(0)
#define BCM2835_I2C_S_DONE	BIT(1)
#define BCM2835_I2C_S_TXW	BIT(2)
#define BCM2835_I2C_S_RXR	BIT(3)
#define BCM2835_I2C_S_TXD	BIT(4)
#define BCM2835_I2C_S_RXD	BIT(5)
#define BCM2835_I2C_S_TXE	BIT(6)
#define BCM2835_I2C_S_RXF	BIT(7)
#define BCM2835_I2C_S_ERR	BIT(8)
#define BCM2835_I2C_S_CLKT	BIT(9)
#define BCM2835_I2C_S_LEN	BIT(10) /* Fake bit for SW error reporting */

#define TEMPL_SIZE 25
unsigned long i2c_ctrl_base;

uint8_t 	templ_type[TEMPL_SIZE]={0};
uint32_t	templ_addr[TEMPL_SIZE]={0};
uint32_t 	templ_value[TEMPL_SIZE]={0};
unsigned char read_buf[3];

// struct driv_templ baro_init_driv_templ;

static FORCEDINLINE uint32_t readl(uint32_t *addr){

		uint32_t rtn = *(volatile uint32_t *)addr;

		__asm__ __volatile__(
		// "ldr %0, [%1] \n\t"
 		"DSB SY       \n\t"
        :
        :
        :
    );
    return rtn;
}

// int debug_read;
static FORCEDINLINE void  writel(uint32_t val, volatile uint32_t *addr){


	*(volatile uint32_t *)addr = val;

	__asm__ __volatile__(
		// "str %0, [%1] \n\t"
 		"DSB ST       \n\t"
        :
        :
        :
    ); 
}

extern long mult_busy_loop(unsigned long execution_time);


void templ_init(){

	//reset barometer
	templ_type[0] 	= 0;
	templ_addr[0] 	= i2c_ctrl_base + BCM2835_I2C_DIV;
	templ_value[0] 	= 0xfa;

	templ_type[1] 	= 0;
	templ_addr[1] 	= i2c_ctrl_base + BCM2835_I2C_DEL;
	templ_value[1] 	= 0xf003e;

	templ_type[2] 	= 0;
	templ_addr[2] 	= i2c_ctrl_base + 0xc;
	templ_value[2] 	= 0x77;

	templ_type[3] 	= 0;
	templ_addr[3] 	= i2c_ctrl_base + 0x8;
	templ_value[3] 	= 0x1;

	templ_type[4] 	= 0;
	templ_addr[4] 	= i2c_ctrl_base + 0x00;
	templ_value[4] 	= BCM2835_I2C_C_ST | BCM2835_I2C_C_I2CEN |	BCM2835_I2C_C_INTT | BCM2835_I2C_C_INTD;	

	templ_type[5] 	= 2;
	templ_addr[5] 	= 0;
	templ_value[5] 	= 0;	

	templ_type[6] 	= 0;
	templ_addr[6] 	= i2c_ctrl_base + 0x10;
	templ_value[6] 	= 0x1e;

	templ_type[7] 	= 0;
	templ_addr[7] 	= i2c_ctrl_base + 0x00;
	templ_value[7] 	= 0x10;

	templ_type[8] 	= 0;
	templ_addr[8] 	= i2c_ctrl_base + 0x04;
	templ_value[8] 	= 0x302;

	//read prom in barameter
	templ_type[9] 	= 0;
	templ_addr[9] 	= i2c_ctrl_base + BCM2835_I2C_DIV;
	templ_value[9] 	= 0xfa;

	templ_type[10] 	= 0;
	templ_addr[10] 	= i2c_ctrl_base + BCM2835_I2C_DEL;
	templ_value[10] 	= 0xf003e;

	templ_type[11] 	= 0;
	templ_addr[11] 	= i2c_ctrl_base + 0xc;
	templ_value[11] 	= 0x77;

	templ_type[12] 	= 0;
	templ_addr[12] 	= i2c_ctrl_base + 0x8;
	templ_value[12] 	= 0x1;

	templ_type[13] 	= 0;
	templ_addr[13] 	= i2c_ctrl_base + 0x00;
	templ_value[13] 	= BCM2835_I2C_C_ST | BCM2835_I2C_C_I2CEN | BCM2835_I2C_C_INTT;

	templ_type[14] 	= 2;
	templ_addr[14] 	= 0;
	templ_value[14] 	= 0;	

	templ_type[15] 	= 0;
	templ_addr[15] 	= i2c_ctrl_base + 0x10;
	templ_value[15] 	= 0xa0;

	templ_type[16] 	= 0;
	templ_addr[16] 	= i2c_ctrl_base + 0x0c;
	templ_value[16] 	= 0x77;

	templ_type[17] 	= 0;
	templ_addr[17] 	= i2c_ctrl_base + 0x8;
	templ_value[17] 	= 0x2;

	templ_type[18] 	= 0;
	templ_addr[18] 	= i2c_ctrl_base + 0x00;
	templ_value[18] 	= BCM2835_I2C_C_ST | BCM2835_I2C_C_I2CEN | BCM2835_I2C_C_READ | BCM2835_I2C_C_INTR | BCM2835_I2C_C_INTD;

	templ_type[19] 	= 2;
	templ_addr[19] 	= 0;
	templ_value[19] 	= 0;

	templ_type[20] 	= 1;
	templ_addr[20] 	= i2c_ctrl_base + 0x10;
	templ_value[20] 	= read_buf[0];

	templ_type[21] 	= 1;
	templ_addr[21] 	= i2c_ctrl_base + 0x10;
	templ_value[21] 	= read_buf[1];

	templ_type[22] 	= 2;
	templ_addr[22] 	= 0;
	templ_value[22] 	= 2;

	templ_type[23] 	= 0;
	templ_addr[23] 	= i2c_ctrl_base + 0x00;
	templ_value[23] 	= 0x10;

	templ_type[24] 	= 0;
	templ_addr[24] 	= i2c_ctrl_base + 0x04;
	templ_value[24] 	= 0x302;

	return;
}

// void rt_tee_replayer(struct driv_templ *templ){

int addr_ready_flag = 0;

void rt_tee_replayer(){

	for(int i = 0; i < TEMPL_SIZE; i++){
	
		if(templ_type[i] == 0) writel(templ_value[i],templ_addr[i]);
		else if(templ_type[i] == 1) readl(templ_addr[i]);
		else if(templ_value[i] == 0) while(!readl(addr_ready_flag)){}
		else mult_busy_loop(templ_value[i]);

	}

}

void i2c_addr_init(){

	unsigned long phys_addr = 0x3f804000;
	unsigned long virt_addr = phys_to_virt_io(phys_addr);
	i2c_ctrl_base = virt_addr;

}
	
