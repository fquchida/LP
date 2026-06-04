#include <stdio.h>
int fatorial (n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fatorial(n-1);
}
int fatorialduplo(n){
    return fatorial(2*n)/fatorial(n);
}