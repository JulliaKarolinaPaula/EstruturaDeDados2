#include <bits/stdc++.h>
using namespace std;

void insertionSort(int *lista, int n){
    int aux, chave, j;
    for(int i = 1;i<n;i++){
        chave = lista[i];
        j = i - 1;
        while(j >= 0 && lista[j]>chave){
            aux = lista[j+1];
            lista[j+1] = lista[j];
            lista[j] = aux;
            j = j - 1;
        }
        lista[j+1] = chave;
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
    
    insertionSort(&lista[0], n);

    printf("\nLISTA ORDENADA: ");
    for(int i = 0;i < n;i++){
          printf("%d ", lista[i]);
    }


    return 0;
}