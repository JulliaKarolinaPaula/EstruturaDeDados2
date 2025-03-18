#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *lista, int n){
    int aux;
      for(int i = 0;i < (n -1);i++){
         for(int j = 0;j < (n - i - 1);j++){
            if(lista[j] > lista[j+1]){
                  aux = lista[j+1];
                  lista[j+1] = lista[j];
                  lista[j] = aux;
                printf("\nOrdenando: ");
                for(int k = 0;k < n;k++){
                  printf(" %d ", lista[k]);
                }
            }
         }
      }
};

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
      
      bubbleSort(&lista[0], n);

      printf("\nLISTA ORDENADA: ");
      for(int i = 0;i < n;i++){
            printf("%d ", lista[i]);
      }



      return 0;
}
