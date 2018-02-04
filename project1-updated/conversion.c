#include "conversion.h"

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){
	int8_t exp, rem, i;
	int32_t val = data;
	if (base>16 || base<2) return -1;
	if (val>0){
		while(val>0){
			val/=base;
			exp++;
		}
	}
	else{
		while(val<0){
			val/=base;
			exp++;
		}
		exp+1; /*for negative sign*/
	}

	ptr += exp;
	*ptr = '\0'
	ptr--;
	for (i=0;i<=exp;i++){
		rem=data%base;
		data/=base;
		*ptr=(char) rem;
		ptr--;
	}
	if(val<0){
		*ptr='-';
	}
	return exp;
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){
	int8_t i; 
	int32_t val;
	int8_t neg=0;
	if (base>16 || base<2) return -1;
	if (*ptr = '-'){
		ptr++;
		neg=1;
	}
	ptr+=(digits-1);
	val+= (int32_t) *ptr;
	ptr--;
	for(i=0; i<(digits-1); i++){
		val+= base*((int32_t) *ptr);
		base*=base;
		ptr--;
	}
	if (neg){
		val*=-1;
	}
	return val;
}