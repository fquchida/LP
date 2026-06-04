#include <stdio.h>

void imprimeCrescente(int N) {
    if (N < 0) {
        return;
    }

    imprimeCrescente(N - 1);
    printf("%d\n", N);
}