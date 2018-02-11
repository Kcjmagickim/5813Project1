/**********************************
@file: platform.h
@brief: header file for .c file
@author: John Kim
@date: Feb 4th, 2018
***********************************/

#ifndef PLATFORM_H_
#define PLATFORM_H_
#include <stdarg.h>
#include <stdio.h>

#ifdef KL25Z
	#define PRINTF(...) printf(__VA_ARGS__) (0)
#else
	#define PRINTF(...) printf(__VA_ARGS__)
#endif/*KL25z*/

#endif
