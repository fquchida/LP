#include <stdio.h>
void imprimeSerie(int i, int j, int k){
    if(i==j) return;
    printf("%d", i + k);
    imprimeSerie(i+1, j, k);
}