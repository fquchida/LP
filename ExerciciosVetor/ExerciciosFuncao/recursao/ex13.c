#include <stdio.h>
int SomaSerie(int i, int j, int k){
    if(i==j){
        return 0;
    }
    return i+k + SomaSerie(i+1, j, k);

}