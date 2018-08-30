#Makefile CountingSort

all: CountingSort
 
CountingSort: CtSort.o 
	gcc -o CountingSort CtSort.o
 
CtSort.o: CtSort.c
	gcc -o CtSort.o CtSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ CountingSort
