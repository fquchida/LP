#include <stdio.h>

int sequencia(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(n <= 0){
        return 0;
    }
    return 2*sequencia(n-1) + 3*sequencia(n-2);    
}