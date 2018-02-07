#ifndef DATA_H_
#define DATA_H_

#define LITTLE_ENDIAN  0
#define BIG_ENDIAN =1
#define SWAP_NO_ERROR  0
#define SWAP_ERROR  -1

void print_cstd_type_sizes();

void print_stdint_type_sizes();

void print_pointer_sizes();

int32_t swap_data_endianness(uint8_t * data, size_t type_length);

uint32_t determine_endianness();

#endif /*Data.h*/