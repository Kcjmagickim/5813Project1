/**********************************
@file: conversion.h
@brief: header file for .c file
@author: John Kim
@date: Feb 1st, 2018
***********************************/

#ifndef CONVERSION_H_
#define CONVERSION_H_

#include <stdint.h>

#define BASE_16 16
#define BASE_10 10
/*Header file for basic data manipulation*/

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif
