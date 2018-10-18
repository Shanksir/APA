#Makefile AlgoritmoMochila

all: AlgoritmoMochila
 
AlgoritmoMochila: Mochila.o 
	g++ -o AlgoritmoMochila Mochila.o
 
Mochila.o: Mochila.cpp
	g++ -o Mochila.o Mochila.cpp -c -W -Wall -ansi -std=c++11
 
clean:
	rm -rf *.o *~ AlgoritmoMochila
