#Makefile InsertionSort

all: InsertionSort
 
InsertionSort: InSort.o 
	gcc -o InsertionSort InSort.o
 
InSort.o: InSort.c
	gcc -o InSort.o InSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ InsertionSort