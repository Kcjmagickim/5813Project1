/**********************************
@file: debug.c
@brief: Printer for debugging purpose
@author: John Kim
@date: Feb 6th, 2018

Note: All function descriptions 
resides in the header file.
***********************************/

#include "debug.h"
#include "platform.h"
#include <stdint.h>

void print_array(uint8_t *start, uint32_t length){
	#ifdef VERBOSE
	uint32_t val=0;
	while(length>0){
		val = val*2+*(start);
		length--;
		start++;
	}
	PRINTF("%x\n",val);
	#endif
}
