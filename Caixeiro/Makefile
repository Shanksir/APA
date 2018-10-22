#Makefile AlgoritmoCaixeiro

all: AlgoritmoCaixeiro

AlgoritmoCaixeiro: Caixeiro.o
	g++ -o AlgoritmoCaixeiro Caixeiro.o

Caixeiro.o: Caixeiro.cpp
	g++ -o Caixeiro.o Caixeiro.cpp -c -W -Wall -ansi -std=c++11

clean:
	rm -rf *.o *~ AlgoritmoCaixeiro
