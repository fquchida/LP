#include <stdio.h>

int SomaVet(int v[], int i, int n){
    if (i == n){
        return 0;
    }
    return v[i] + SomaVet(v, i+1, n);
}