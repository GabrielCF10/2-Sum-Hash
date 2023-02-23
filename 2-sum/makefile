all: main.o base_hash.o
	@gcc main.o base_hash.o -o main

main.o: main.c
	@gcc main.c -c

base_hash.o: base_hash.c
	@gcc base_hash.c -c

run:
	@./main	