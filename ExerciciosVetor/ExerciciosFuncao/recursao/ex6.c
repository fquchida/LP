#include <stdio.h>

int multRec(int k, int n){
    if(n == 1 || n == 0){
        return 0;
    }
    return k+multRec(k, n-1);
}