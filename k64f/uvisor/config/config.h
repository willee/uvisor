#ifndef  __CONFIG_H__

#include <uvisor-config.h>

#ifdef  NOSYSTEM
#define RESERVED_FLASH 0x420
#else
#define NV_CONFIG_OFFSET 0x400
#endif/*NOSYSTEM*/

#define CHANNEL_DEBUG 1
#define XTAL_FREQUENCY 48000000UL

#define USE_FLASH_SIZE UVISOR_FLASH_SIZE
#define USE_SRAM_SIZE  UVISOR_SRAM_SIZE

#define STACK_SIZE 2048
#define STACK_GUARD_BAND 128
#define TOTAL_SRAM_SIZE (256*1024UL)

#endif /*__CONFIG_H__*/
