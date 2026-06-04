#include <stdio.h>

int potencia(int k, int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return k*potencia(k, n-1);
}