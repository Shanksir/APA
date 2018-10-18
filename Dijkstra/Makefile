#Makefile Dijkstra

all: AlgoritmoDijkstra
 
AlgoritmoDijkstra: Dijkstra.o 
	g++ -o AlgoritmoDijkstra Dijkstra.o
 
Dijkstra.o: Dijkstra.cpp
	g++ -o Dijkstra.o Dijkstra.cpp -c -W -Wall -ansi -std=c++11

 
clean:
	rm -rf *.o *~ AlgoritmoDijkstra
