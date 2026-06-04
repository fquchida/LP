#include <stdio.h>

int cubos(int n){
    if(n == 0){
        return 0;
    }
    return n*n*n + cubos(n-1);
}