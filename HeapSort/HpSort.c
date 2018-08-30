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

void HpSort(int list[], int n){
   int i = n / 2, pai, filho, t;
   while(1) {
      if (i > 0) {
          i--;
          t = list[i];
      } else {
          n--;
          if (n == 0) return;
          t = list[n];
          list[n] = list[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (list[filho + 1] > list[filho]))
              filho++;
          if (list[filho] > t) {
             list[pai] = list[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      list[pai] = t;
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
    printf("---------------------------------------------\n");
    printf("------------------Heap Sort------------------\n");
    printf("---------------------------------------------\n");   
    
    int list[NUM_MAX];

    Preencher(list);
    
    printf("Antes da Ordenação: ");
    Imprimir(list);
    
    HpSort(list,NUM_MAX); /*Algoritmo Heap Sort*/
    
    printf("Depois da ordenação: ");
    Imprimir(list);

    return 0;
}
