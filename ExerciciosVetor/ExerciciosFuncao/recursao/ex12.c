#include <stdio.h>
void menorVet(int v[], int n, int menor, int i){
    if (n == i){
        return;
    }
    if(menor > v[i]){
        menor = v[i];
    }
    menorVet(v, n, menor, i + 1);
}