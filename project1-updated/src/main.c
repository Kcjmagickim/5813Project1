/**********************************
@file: main.c
@brief: Uses compiler flag to run the
project 1 test function.
@author: John Kim
@date: Feb 5th, 2018

Note: All function descriptions 
resides in the header file.
***********************************/

#include "project1.h"

int main(){
	#ifdef PROJECT1
		project1();
	#endif
	return 0;
}
