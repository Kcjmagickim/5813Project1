#ifndef MEMORY_H_
#define MEMORY_H_
/*Header file for memeory manipulation functions*/

uint8_t * my_memmove(uint8_t *src, uint8_t *dst, size_t length);

uint8_t * my_memcpy(uint8_t *src, uint8_t *dst, size_t length);

uint8_t * my_memset(uint8_t *src, size_t length, uint8_t value);

uint8_t * my_memzero(uint8_t *src, size_t length);

uint8_t * my_reverse(uint8_t *src, size_t length);

void * reverse_words(size_t length);

void * free_words(uint32_t *src);
#endif