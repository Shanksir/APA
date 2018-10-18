#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#define TAM_MAT 10

using namespace std;

struct arestas{
  int v1;
  int v2;
  int peso;
};

void Prim(arestas a[][TAM_MAT], int origem, int pai[]){
  int i, j, primeiro, destino;
  double menorPeso;
  int soma = 0;
  for(i=0; i<TAM_MAT; i++){
    pai[i] = -1;
  }
  pai[origem] = origem;
  while(1){
    primeiro = 1; 
    for(i=0; i < TAM_MAT - 1; i++){
      if(pai[i]!= -1){
        for(j=0; j<= TAM_MAT - 1; j++){
          if(j<=i){
          continue;
          }
          if(pai[a[i][j].v2] == -1){
            if(primeiro){
              menorPeso = menorPeso + a[i][j].peso;
              origem = i;
              destino = a[i][j].v2;
              primeiro = 0;
            }else{
              if(menorPeso > a[i][j].peso){
                menorPeso = menorPeso + a[i][j].peso;
                origem = i;
                destino = a[i][j].v2;
              }
            }
          }
        }
      }
    }
    if(primeiro == 1){
      break;
    }
  pai[destino]=origem;
  }
  for(int i=1; i<TAM_MAT; i++){
    printf("%d: %d\n %d ",pai[i],i,a[pai[i]][i].peso);
    
    soma = soma + a[pai[i]][i].peso;
  }
  cout << "Custo: " << soma << endl;
}

int main () {
  
  ifstream myfile;
  myfile.open("dij10.txt",ios::in);
  arestas a[TAM_MAT][TAM_MAT];
  if (myfile.is_open())
  {
    string line;
    int num;
    getline(myfile,line);
    for(int i = 0; i<TAM_MAT-1; i++){
        getline(myfile,line);
        stringstream l(line);
    for(int j = 0; j<=TAM_MAT-1; j++){
        if(j<=i){
          continue;
        }
        l >> num;
        a[i][j].v1 = i;
        a[i][j].v2 = j;
        a[i][j].peso = num;
        //cout << "Peso " << a[i][j].peso << " Atual : " << a[i][j].v1 << " para : " << a[i][j].v2 << "\n";
      }
    }
    myfile.close();
  }
  else cout << "Unable to open file" << "\n" << endl; 
  int pai[TAM_MAT];
  Prim(a, 0 , pai);


  return 0;
}
