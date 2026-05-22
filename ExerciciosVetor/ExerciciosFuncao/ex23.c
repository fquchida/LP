#include <stdio.h>

void QuaisN(int x, int y){
    for(int i = x+1; i<y;i++ ){
        if(i%13==5){
            printf("%d, ", i);
        }
    }
}