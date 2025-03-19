#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *lista,int n){
    int min_index;

    for(int i = 0;i < n;i++){
      min_index = i;
      for(int j = i + 1;j < n;j++){
        if(lista[j] < lista[min_index]){
          min_index = j;
        }
      }
      if(min_index != i){
        int aux;
        aux = lista[min_index];
        lista[min_index] = lista[i];
        lista[i] = aux;
      }
      printf("\nOrdenando: ");
      for(int k = 0;k < n;k++){
        printf(" %d ", lista[k]);
      }
    }
}

int main(){
  int n;

  scanf("%d", &n);

  int lista[n];

  for(int i = 0;i < n;i++){
        scanf("%d", &lista[i]);
  }

  printf("\nLISTA DESORDENADA: ");
  for(int i = 0;i < n;i++){
       printf("%d ", lista[i]);
  }
  
  selectionSort(&lista[0], n);

  printf("\nLISTA ORDENADA: ");
  for(int i = 0;i < n;i++){
        printf("%d ", lista[i]);
  }

  return 0;
}