#include <stdio.h>
int fatorialDuplo (n){
    if(n == 0 || n == 1){
        return 1;
    }
    if(n%2 == 0){
        return 1*fatorial(n-1);
    }
    return n*fatorial(n-1);
}