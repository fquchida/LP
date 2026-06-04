#include <stdio.h>

int func(int n){
    if(n == 0){
        return 0;
    }
    return (1+(n*n))/n+func(n-1);
}