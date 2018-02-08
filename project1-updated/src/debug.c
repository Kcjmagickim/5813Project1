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