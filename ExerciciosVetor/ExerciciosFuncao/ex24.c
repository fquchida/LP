#include <stdio.h>

int fatorial(int n){
    int inicial = 1;
    if(n == 0 || n == 1){
        return 1;
    }
    if(n < 0){
        return 0; //nao existe
    }

    for(int i = 1; i < n; i++){
        inicial *= i;
    }

    return inicial;
}
int combinatoria(int a, int b){
    return fatorial(a)/(fatorial(b)*fatorial(a-b));
}