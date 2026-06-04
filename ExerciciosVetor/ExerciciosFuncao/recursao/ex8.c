#include <stdio.h>

void imprimeDeCrescente(int N) {
    if (N < 0) {
        return;
    }

    
    printf("%d\n", N);
    imprimeDeCrescente(N - 1);
}