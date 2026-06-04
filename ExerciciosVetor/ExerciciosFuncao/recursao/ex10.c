#include <stdio.h>

void imprimeDeCrescente(int N) {
    if (N < 0) {
        return;
    }

    if(N%2 == 0){
        printf("%d\n", N);
    }    
    imprimeDeCrescente(N - 1);
}