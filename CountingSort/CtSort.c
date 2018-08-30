/* Programa para exemplificar o algoritmo de ordenação por seleção.*/
/* Autor: Rodrigo Alves; Matricula: 2016015527; */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 9

void Imprimir(int saida[]){
    int i;
    for(i=0; i < NUM_MAX; i++){
        printf("%d ",saida[i]);
    }
    printf("\n");
}

void CtSort(int list[],int saida[],int k,int n){ 
    int vetGrande[k];
    for(int i =0; i<=k; i++){
        vetGrande[i]= 0 ;
    }

    for(int j=0; j < n; j++){
        vetGrande[list[j]] = vetGrande[list[j]] + 1;
	}
    
    for(int i=1; i <= k; i++){
        vetGrande[i] = vetGrande[i] + vetGrande[i-1];
	}
    
    for(int j = (n-1) ; j>=0; j--){
        saida[vetGrande[list[j]]-1] = list[j];
        vetGrande[list[j]] = vetGrande[list[j]]- 1;
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
    printf("-----------------------------------------------\n");
    printf("------------------CtSort Sort------------------\n");
    printf("-----------------------------------------------\n");   
    
    int list[NUM_MAX];
    int saida[NUM_MAX]={'0'};
    int maior=0;

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    /*Acha o maior elemento*/
    for(int i=0; i < NUM_MAX; i++){
        if(list[i]>maior){
            maior = list[i];
        }
	}
    
    CtSort(list,saida,maior,NUM_MAX); /*Algoritmo Counting Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(saida);

    return 0;
}
