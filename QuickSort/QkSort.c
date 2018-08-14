/* Programa para exemplificar o algoritmo QuickSort.*/
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

int particiona (int list[], int Inicio, int Fim){
    int esq,dir,pivo,aux;
    esq=Inicio;
    dir=Fim;
    pivo=list[Inicio];
    while(esq<dir){
        while(list[esq] <= pivo){
            esq++;
        }
        while(list[dir] > pivo){
            dir--;
        }
        if(esq<dir){
            aux = list[esq];
            list[esq]=list[dir];
            list[dir] = aux;
        }
    }
    list[Inicio]= list[dir];
    list[dir] = pivo;
    return dir;
}

void QkSort(int list[],int Inicio, int Fim){
    int pivo;
    if(Fim>Inicio){
        pivo = particiona(list,Inicio,Fim);
        QkSort(list,Inicio,pivo-1);
        QkSort(list,pivo+1,Fim);
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
    printf("------------------Quick Sort------------------\n");
    printf("----------------------------------------------\n");   
    
    int list[NUM_MAX];

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    QkSort(list,0,NUM_MAX); /*Algoritmo Quick Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(list);

    return 0;
}