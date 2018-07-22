/* Programa para exemplificar o algoritmo de ordenação por inserção.*/
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

void InSort(int list[]){
    int i,k;
    for(i = 0; i < (NUM_MAX); i++){
        if(list[i] > list[i+1]){
            for(k = 0; k < (NUM_MAX); k++){
                if(list[i+1] < list[k]){
                    int aux = list[k];
                    list[k] = list[i+1];
                    list[i+1] = aux;
                }
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
    printf("------------------Insertion Sort------------------\n");
    printf("--------------------------------------------------\n");   
    
    int list[NUM_MAX];

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    InSort(list); /*Algoritmo Insertion Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(list);

    return 0;
}