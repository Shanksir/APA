#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#define MAT 4

using namespace std;

struct cidades{
  int custo;
};

void tsp (cidades c[][MAT],int quantidadeCidades){
	int menorCusto = 99999;
	int soma = 0;
	int flag = 0;
	int i,j;
	int guarda=0;
	int visitado[MAT]; // Flag
	visitado[0] = 1; // Indica que estamos começando na cidade de indice zero
	cout << "Caminho: ";
	for(i = 0; i <= quantidadeCidades ; i++){
		i = guarda;
		cout << "" << i << " ";
		for(j = 0; j < quantidadeCidades ; j++){
			if (i == j){
				continue;
			}
			if (c[i][j].custo < menorCusto && visitado[j] != 1){
				menorCusto = c[i][j].custo;
				guarda = j;
			}
		}
		flag = flag + 1;
		visitado[i] = 1;
		if(flag == quantidadeCidades ){
			cout << "0"; // Só para representar que o caminho volta para a origem.
			soma = soma + c[guarda][0].custo;
			cout << endl;
			cout << "Resposta: " << soma << endl;
			break;
		}
		soma = soma + menorCusto;
		menorCusto = 99999;
		i = guarda;
	}	
}

int main () {
  
  ifstream myfile;
  myfile.open("pcv04.txt",ios::in);
  int numCidades;
  cidades c[MAT][MAT] = {};
  if (myfile.is_open())
  {
    string line;
    int num;
    getline(myfile,line);
    stringstream l(line);
    l >> num;
    numCidades = num;
    for(int i = 0; i<numCidades; i++){
    	getline(myfile,line);
        stringstream l(line);
    	for(int j = 0; j<numCidades; j++){
        	l >> num;
    		c[i][j].custo = num;
    		//cout << "Ir da cidade " << i << " para a cidade " << j << " tem Custo = " << c[i][j].custo << endl;
    	}
    }
    cout << "Numero de cidades: " << numCidades << endl;
    myfile.close();
  }
  else cout << "Unable to open file" << "\n" << endl; 
  tsp(c,numCidades);
  return 0;
}
