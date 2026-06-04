#include <stdio.h>

fibg(int f0, int f1, int n){
    if (n == 0){
        return f0;
    }
    if (n == 1){
        return f1;
    }
    return fibg(f0, f1, n-1) + fibg(f0, f1, n-2);
}