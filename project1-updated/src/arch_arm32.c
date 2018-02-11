/**********************************
@file: arch_arm32.c
@brief: Used to get endianess of an ARM CPU
returns 0 if little-endian 1 otherwise
@author: John Kim
@date: Feb 1st, 2018
***********************************/

#include "arch_arm32.h"
#include <stdint.h>

inline uint32_t ARM32_AIRCR_get_endianness_setting(){
	return ( (__AIRCR & __AIRCR_ENDIANNESS_MASK) >>__AIRCR_ENDIANNESS_OFFSET );
}
