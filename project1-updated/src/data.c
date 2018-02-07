#include "data.h"

void print_cstd_type_sizes(){
	size_t temp;
	temp = sizeof(char);
	PRINTF("size of char = %d", temp);
	temp = sizeof(short);
	PRINTF("size of short = %d", temp);
	temp = sizeof(int);
	PRINTF("size of int = %d", temp);		
	temp = sizeof(long);
	PRINTF("size of long = %d", temp);		
	temp = sizeof(double);
	PRINTF("size of double = %d", temp);		
	temp = sizeof(float);
	PRINTF("size of float = %d", temp);		
	temp = sizeof(unsigned char);
	PRINTF("size of unsigned char = %d", temp);		
	temp = sizeof(unsigned int);
	PRINTF("size of unsigned int = %d", temp);		
	temp = sizeof(unsigned long);
	PRINTF("size of unsigned long = %d", temp);		
	temp = sizeof(signed char);
	PRINTF("size of signed char = %d", temp);		
	temp = sizeof(signed int);
	PRINTF("size of signed int = %d", temp);		
	temp = sizeof(signed long);
	PRINTF("size of signed long = %d", temp);	
}

void print_stdint_type_sizes(){
	size_t temp;
	temp = sizeof(int8_t);
	PRINTF("size of int8_t = %d", temp);
	temp = sizeof(uint8_t);
	PRINTF("size of uint8_t = %d", temp);
	temp = sizeof(int16_t);
	PRINTF("size of int16_t = %d", temp);
	temp = sizeof(uint16_t);
	PRINTF("size of uint16_t = %d", temp);
	temp = sizeof(int32_t);
	PRINTF("size of int32_t = %d", temp);
	temp = sizeof(uint32_t);
	PRINTF("size of uint32_t = %d", temp);
	temp = sizeof(uint_fast8_t);
	PRINTF("size of uint_fast8_t = %d", temp);
	temp = sizeof(int_fast16_t);
	PRINTF("size of uint_fast16_t = %d", temp);
	temp = sizeof(uint_fast32_t);
	PRINTF("size of uint_fast32_t = %d", temp);
	temp = sizeof(uint_least8_t);
	PRINTF("size of uint_least8_t = %d", temp);
	temp = sizeof(int_least16_t);
	PRINTF("size of uint_least16_t = %d", temp);
	temp = sizeof(uint_least32_t);
	PRINTF("size of uint_least32_t = %d", temp);
	temp = sizeof(size_t);
	PRINTF("size of size_t = %d", temp);
	temp = sizeof(ptrdiff_t);
	PRINTF("size of ptrdiff_t = %d", temp);
}

void print_pointer_sizes(){
	size_t temp;
	temp = sizeof(char *);
	PRINTF("size of char * = %d", temp);
	temp = sizeof(short *);
	PRINTF("size of short * = %d", temp);
	temp = sizeof(int *);
	PRINTF("size of int * = %d", temp);		
	temp = sizeof(long *);
	PRINTF("size of long * = %d", temp);		
	temp = sizeof(double *);
	PRINTF("size of double * = %d", temp);		
	temp = sizeof(float *);
	PRINTF("size of float * = %d", temp);		
	temp = sizeof(void *);
	PRINTF("size of void * = %d", temp);		
	temp = sizeof(int8_t *);
	PRINTF("size of int8_t * = %d", temp);		
	temp = sizeof(int16_t *);
	PRINTF("size of int16_t * = %d", temp);		
	temp = sizeof(int32_t *);
	PRINTF("size of int32_t * = %d", temp);		
	temp = sizeof(char **);
	PRINTF("size of char ** = %d", temp);		
	temp = sizeof(int **);
	PRINTF("size of int ** = %d", temp);	
	temp = sizeof(void **);
	PRINTF("size of void ** = %d", temp);	
}

int32_t swap_data_endianness(uint8_t * data, size_t type_length){
	if (!data) return SWAP_ERROR;
	int8_t bits = type_length/sizeof(*data);
	uint8_t i;
	uint8_t * end = data+bits-1;
	if (!end) return SWAP_ERROR;
	for (i=0; i<bits/2; i++){
		*data ^= *end;
		*end ^= *data;
		*data ^= *end;
		data++; end--;
	}
	return SWAP_NO_ERROR;
}

uint32_t determine_endianness(){
	uint32_t helper = 1;
	uint8_t * endian = &helper;
	if (*endian==1){return LITTLE_ENDIAN;}
	else if (*endian==0){return BIG_ENDIAN;}
	else return -1;
}
