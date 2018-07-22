/* Programa para exemplificar o algoritmo de ordenação por seleção.*/
/* Autor: Rodrigo Alves; Matricula: 2016015527; */

#include <stdio.h>
#include <stdlib.h>
#define NUM_MAX 9

void Imprimir(int list[]){
    int i;
    for(i=0; i < NUM_MAX; i++){
        printf("%d ",list[i]);
    }
    printf("\n");
}

void SelSort(int list[]){
    int i,k;
    for (i = 0; i < (NUM_MAX); i++){
        for (k=(i+1); k < (NUM_MAX); k++){
            if(list[i] > list[k]){
                int aux = list[i];
                list[i] = list[k];
                list[k] = aux;
            }
        }
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
    printf("--------------------------------------------------\n");
    printf("------------------Selection Sort------------------\n");
    printf("--------------------------------------------------\n");   
    
    int list[NUM_MAX];

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    SelSort(list); /*Algoritmo Selection Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(list);

    return 0;
}