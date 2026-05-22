#include <stdio.h>

int maiorQuadrado(int a){
    for(int i = 0; i < a; i++){
        if(i*i > a){
            return i;
        }
    }
}