#5813 project 1


INCLUDES =	-I../include/common/ \
		-I../include/kl25z/ \
		-I../include/CMSIS/ \
		-I../platform/ \

SRCS = arch_arm32.c conversion.c data.c debug.c main.c memory.c project1.c system_MKL25Z4.c

PPRO := $(SRCS:.c=.i)

OBJS := $(SRCS:.c=.o)

ASMS := $(SRCS:.c=.asm)

LDFLAGS = -lm

ifeq ($(PLATFORM),KL25z)
	CC = arm-linux-gnueabi-gcc
else
	CC = gcc
endif

CFLAGS = -Wall	\
		-Werror	\
		-g 		\
		-O0		\
		-std=c99 \
		-DPROJECT1 \
		-DVERBOSE 

arch_arm32.i: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o arch_arm32.i arch_arm32.c

conversion.i: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o conversion.i conversion.c

data.i: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o data.i data.c

debug.i: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o debug.i debug.c


memory.i: memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o memory.i memory.c

project1.i: project1.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o project1.i project1.c




arch_arm32.asm: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o arch_arm32.asm arch_arm32.c

conversion.asm: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o conversion.asm conversion.c

data.asm: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o data.asm data.c

debug.asm: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o debug.asm debug.c



memory.asm: memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o memory.asm memory.c

project1.asm: project1.c #conversion.c memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o project1.asm project1.c



arch_arm32.o: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o arch_arm32.o arch_arm32.c

conversion.o: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o conversion.o conversion.c

data.o: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o data.o data.c

debug.o: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o debug.o debug.c



memory.o: memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o memory.o memory.c

project1.o: project1.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o project1.o project1.c

main: project1.o conversion.o memory.o debug.o
	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o main main.c project1.o conversion.o memory.o debug.o


.PHONY: clean
clean:
	rm -f $(OBJS) $(ASMS) $(PPRO)