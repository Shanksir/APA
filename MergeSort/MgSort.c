/* Programa para exemplificar o algoritmo de MergeSort.*/
/* Autor: Rodrigo Alves; Matricula: 2016015527; */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_MAX 9

void Imprimir(int list[]){
    int i;
    for(i=0; i < NUM_MAX; i++){
        printf("%d ",list[i]);
    }
    printf("\n");
}

void Merge(int list[], int ini, int meio, int fim) {
    int ini1 = ini, ini2 = meio+1, iniAux = 0, tam = fim-ini+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(ini1 <= meio && ini2 <= fim){
        if(list[ini1] < list[ini2]) {
            vetAux[iniAux] = list[ini1];
            ini1++;
        } else {
            vetAux[iniAux] = list[ini2];
            ini2++;
        }
        iniAux++;
    }
    while(ini1 <= meio){  //Se ainda tiver elementos na primeira metade
        vetAux[iniAux] = list[ini1];
        iniAux++;
        ini1++;
    }
    while(ini2 <= fim) {   //Se ainda tiver elementos na segunda metade
        vetAux[iniAux] = list[ini2];
        iniAux++;
        ini2++;
    }
    for(iniAux = ini; iniAux <= fim; iniAux++){  //Copia os elementos do vetor auxiliar para o vetor original
        list[iniAux] = vetAux[iniAux-ini];
    }
    free(vetAux);
}


void MgSort(int list[], int ini, int fim){
    if (ini < fim) {
        int meio = (fim+ini)/2;
        MgSort(list, ini, meio);
        MgSort(list, meio+1, fim);
        Merge(list, ini, meio, fim);
    }
}

void Preencher (int list[]){
    int i;
    for(i=0; i < NUM_MAX; i++){
        printf("Insira um numero: ");
        scanf("%d",&list[i]);
    }
}

int main (){
    printf("----------------------------------------------\n");
    printf("------------------Merge Sort------------------\n");
    printf("----------------------------------------------\n");   
    
    int list[NUM_MAX];

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    MgSort(list, 0, NUM_MAX-1); /*Algoritmo Merge Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(list);

    return 0;
}