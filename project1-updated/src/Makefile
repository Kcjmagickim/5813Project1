#5813 project 1


INCLUDES =	-I../include/common/ \
		-I../include/kl25z/ \
		-I../include/CMSIS/ \
		-I../platform/ \

SRCS = arch_arm32.c conversion.c data.c debug.c main.c memory.c project1.c system_MKL25Z4.c

PPRO := $(SRCS:.c=.i)

OBJS := $(SRCS:.c=.o)

ASMS := $(SRCS:.c=.asm)

ifeq ($(PLATFORM),KL25z)
	CC = arm-linux-gnueabi-gcc
else
	CC = gcc
endif

CFLAGS = -Wall	\
		-Werror	\
		-g 		\
		-O0		\
		-std=c99

arch_arm32.i: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o arch_arm32.i arch_arm32.c

conversion.i: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o conversion.i conversion.c

arch_arm32.asm: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o arch_arm32.asm arch_arm32.c

conversion.asm: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o conversion.asm conversion.c

arch_arm32.o: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o arch_arm32.o arch_arm32.c

conversion.o: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o conversion.o conversion.c

.PHONY: clean
clean:
	rm -f $(OBJS) $(ASMS) $(PPRO)