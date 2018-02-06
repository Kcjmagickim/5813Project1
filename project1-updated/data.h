#ifndef DATA_H_
#define DATA_H_

void print_cstd_type_sizes();

void print_stdint_type_sizes();

void print_pointer_sizes();

int32_t swap_data_endianness(uint8_t * data, size_t type_length);

uint32_t determine_endianness();

int32_t LITTLE_ENDIAN = 0;
int32_t BIG_ENDIAN = 1;
uint32_t SWAP_NO_ERROR = 0;
uint32_t SWAP_ERROR = -1;
