#include <stdio.h>

int dividir(int a, int b);

int main(){

}

int dividir(int a, int b){
    int ehNegativo = 0;
    int total = 0;
    if ((a > 0 && b > 0) || (a < 0 && b < 0)){
        ehNegativo = 0;
    }
    if ((a > 0 && b < 0) || (a > 0 && b < 0)){
        ehNegativo = 1;
    }
    while(a > 0){
        a -= b;
        total++;
    }
    return (total);
}