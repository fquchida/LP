#include <stdio.h>

void imprimirArray(int m[], int i, int n){
    if (n == i){
        return;
    }
    printf("%d", m[i]);
    imprimirArray(m, i + 1, n);

}