#include <stdio.h>

int QtPrimos (int x, int y);
int ehPrimo (int n);

int main(){

}

int QtPrimos(int x, int y){
    int contP = 0;
    for(int i = x+1; i < y; i++){
        if(ehPrimo(i)){
            contP++;
        }
    }
    return contP;
}

int ehPrimo(int n){
    int ehPrimo = 0;
    if(n == 0 || n == 1 || n == 2){
        ehPrimo = 1;
        return ehPrimo;
    }
    for(int i = 2; i < n; i++){
        if(n % i != 0){
            ehPrimo = 1;
            return ehPrimo;
        }
    }
    return ehPrimo;
}