#include <stdio.h>

void imprimeCrescente(int N) {
    if (N < 0) {
        return;
    }

    imprimeCrescente(N - 1);
    if(N%2 == 0){
        printf("%d\n", N);
    }
}