#include "arch_arm32.h"
#include <stdint.h>

inline uint32_t ARM32_AIRCR_get_endianness_setting(){
	return ( (__AIRCR & __AIRCR_ENDIANNESS_MASK) >>__AIRCR_ENDIANNESS_OFFSET );
}
