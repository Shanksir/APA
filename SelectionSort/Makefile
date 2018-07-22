#Makefile SelectionSort

all: SelectionSort
 
SelectionSort: SelSort.o 
	gcc -o SelectionSort SelSort.o
 
SelSort.o: SelSort.c
	gcc -o SelSort.o SelSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ SelectionSort