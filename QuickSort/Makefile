#Makefile QuickSort

all: QuickSort
 
QuickSort: QkSort.o 
	gcc -o QuickSort QkSort.o
 
QkSort.o: QkSort.c
	gcc -o QkSort.o QkSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ QuickSort
