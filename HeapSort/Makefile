#Makefile HeapSort

all: HeapSort
 
HeapSort: HpSort.o 
	gcc -o HeapSort HpSort.o
 
HpSort.o: HpSort.c
	gcc -o HpSort.o HpSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ HeapSort
