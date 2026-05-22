#include <stdio.h>
int ehPrimo(int);
int main(){

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