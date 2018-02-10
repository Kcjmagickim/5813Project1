#5813 project 1

include sources.mk

ifeq ($(PLATFORM),KL25z)
	CC = arm-linux-gnueabi-gcc
else
	CC = gcc
endif

arch_arm32.i: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o arch_arm32.i arch_arm32.c

conversion.i: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o conversion.i conversion.c

data.i: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o data.i data.c

debug.i: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o debug.i debug.c

main.i: main.c
	$(CC) $(CFLAGS) $(INCLUDES) -E -o main.i main.c

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

main.asm: main.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o main.asm main.c

project1.asm: project1.c
	$(CC) $(CFLAGS) $(INCLUDES) -S -o project1.asm project1.c


arch_arm32.d: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o arch_arm32.d arch_arm32.c

conversion.d: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o conversion.d conversion.c

data.d: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o data.d data.c

debug.d: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o debug.d debug.c

main.d: main.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o main.d main.c

memory.d: memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o memory.d memory.c

project1.d: project1.c #conversion.c memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -M -o project1.d project1.c


arch_arm32.o: arch_arm32.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o arch_arm32.o arch_arm32.c

conversion.o: conversion.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o conversion.o conversion.c

data.o: data.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o data.o data.c

debug.o: debug.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o debug.o debug.c

main.o: main.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o main.o main.c

memory.o: memory.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o memory.o memory.c

project1.o: project1.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o project1.o project1.c

project1.elf: project1.o conversion.o memory.o debug.o
	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -o project1.elf main.c project1.o conversion.o memory.o debug.o

.PHONY: clean
clean:
	rm -f *.o *~ *.asm *.i *.d project1.elf

.PHONY: build
build: project1.elf

.PHONY: compile-all
compile-all: $(OBJS)
