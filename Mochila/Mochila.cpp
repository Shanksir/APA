#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>

using namespace std;

struct itens{
  int valor;
  int custo;
};

int Mochila(int c, int pesos[], int valores[], int q){
	// Matriz solução sendo inicializada com zero.
	int V[q + 1][c + 1] = {};

	for(int i = 1; i <= q; i++){
		for(int j = 1; j <= c; j++){	
			if(pesos[i - 1] <= j){
				if((valores[i - 1] + V[i - 1][j - pesos[i - 1]]) > V[i - 1][j]){
					V[i][j] = valores[i - 1] + V[i - 1][j - pesos[i - 1]];
				}
				else{
					V[i][j] = V[i - 1][j];
				}
			} else{
				V[i][j] = V[i - 1][j];
			}
		}
	}

	cout << "Valor da solução: " << V[q][c] << endl;
	return V[q][c];
}

int main () {
  
  ifstream myfile;
  myfile.open("mochila02.txt",ios::in);
  if (myfile.is_open())
  {
    string line;
    int num;
    getline(myfile,line);
    stringstream l(line);
    l >> num;
    int quantidade = num;
    l >> num;
    int capacidade = num;
    itens it[quantidade];

    for(int i = 0; i<quantidade; i++){
        getline(myfile,line);
        stringstream l(line);
    	l >> num;
    	it[i].custo = num;
    	l >> num;
    	it[i].valor = num;
    }

    cout << "Capacidade: " << capacidade << endl;
    cout << "Quantidade de itens: " << quantidade << endl;

    /*for (int i= 0; i < quantidade; i++){
  	cout << "Item[" <<i << "]: Possui custo " << it[i].custo << " e valor " << it[i].valor << endl;  
	}*/
	int vetorP[quantidade];
	int vetorV[quantidade];

	for (int i= 0; i < quantidade; i++){
  		vetorP[i] = it[i].custo;
  		vetorV[i] = it[i].valor; 
	}

	Mochila(capacidade,vetorP,vetorV,quantidade);

    myfile.close();
  }
  else cout << "Unable to open file" << "\n" << endl; 
  
  return 0;
}
