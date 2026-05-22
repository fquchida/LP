#include <stdio.h>

int potencia(int a, int b);

int main(){

}

int potencia(int a, int b){
    
    int total = a;
    
    for(int i = 0; i < b - 1; i++){
        total = total * a;
    }
    return total;
}