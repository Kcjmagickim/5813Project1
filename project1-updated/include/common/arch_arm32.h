/**********************************
@file: arch_arm32.h
@brief: header file for .c file
@author: John Kim
@date: Feb 1st, 2018
***********************************/

#ifndef ARCH_ARM32_H
#define ARCH_ARM32_H

#include <stdint.h>

#define __SCB_ADDRESS (volatile int32_t) 0xE000ED00
#define __AIRCR_ADDRESS_OFFSET (volatile int32_t) 0xC
#define __AIRCR (int32_t) * (int32_t *) (__SCB_ADDRESS + __AIRCR_ADDRESS_OFFSET)
#define __AIRCR_ENDIANNESS_OFFSET (volatile int8_t) 15
#define __AIRCR_ENDIANNESS_MASK (volatile int16_t) 0x8000

uint32_t ARM32_AIRCR_get_endianness_setting();

#endif /*arch_arm32*/
