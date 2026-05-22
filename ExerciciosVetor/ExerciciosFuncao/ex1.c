#include <stdio.h>

int multiplicar(int, int);

int main(){

}

int multiplicar(int a, int b){
    int total = 0;
    if(a > 0 && b > 0){
        for(int i = 0; i < b; i++){
            total += a;
        }
    }
    if(a > 0 && b < 0){
        for(int i = 0; i < a; i++){
            total -= b;
        }
    }
    if(a < 0 && b > 0){
        for(int i = 0; i < b; i++){
            total -= a;
        }
    }
    if(a < 0 && b < 0){
        for(int i = 0; i < abs(b); i++){
            total += abs(a);
        }
    }
    if(a == 0 || b == 0){
        total = 0;
    }
    return(total);
    

}