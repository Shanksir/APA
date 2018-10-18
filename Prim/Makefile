#Makefile Prim

all: AlgoritmoPrim
 
AlgoritmoPrim: Prim.o 
	g++ -o AlgoritmoPrim Prim.o
 
Prim.o: Prim.cpp
	g++ -o Prim.o Prim.cpp -c -W -Wall -ansi -std=c++11

 
clean:
	rm -rf *.o *~ AlgoritmoPrim
