all: main

main: main.o add.o sub.o mult.o div.o
	gcc main.o add.o sub.o mult.o div.o -o main

main.o: main.c
	gcc -c main.c

add.o: add.c
	gcc -c add.c

sub.o: sub.c
	gcc -c sub.c

mult.o: mult.c
	gcc -c mult.c

div.o: div.c
	gcc -c div.c
