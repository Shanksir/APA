#Makefile MergeSort

all: MergeSort
 
MergeSort: MgSort.o 
	gcc -o MergeSort MgSort.o
 
MgSort.o: MgSort.c
	gcc -o MgSort.o MgSort.c -c -W -Wall -ansi -std=gnu99
 
clean:
	rm -rf *.o *~ MergeSort
