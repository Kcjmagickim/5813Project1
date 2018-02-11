#@file: sources.mk
#@brief: Includes common CFLAGS, paths, and source files
#@author: John Kim
#@date: Feb 10th, 2018

INCLUDES =	-I../include/common/ \
		-I../include/kl25z/ \
		-I../include/CMSIS/ \
		-I../platform/ \

SRCS = arch_arm32.c conversion.c data.c debug.c main.c memory.c project1.c system_MKL25Z4.c

PPRO := $(SRCS:.c=.i)

OBJS := $(SRCS:.c=.o)

ASMS := $(SRCS:.c=.asm)

LDFLAGS = -lm

CFLAGS = -Wall	\
		-Werror	\
		-g 		\
		-O0		\
		-std=c99 \
		-DPROJECT1 #\
		#-DVERBOSE 
