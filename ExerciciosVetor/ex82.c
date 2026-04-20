#include <stdio.h>

int main(){
    int A[10];
    int X = 0;
    int M [10];
    for (int i = 0; i < 10; i++){
        printf("\nInsira o valor desejado");
        scanf("%d", &A[i]);
    }
    printf("\nInsira o valor que deseja multiplicar");
    scanf("%d", &X);
    for (int i = 0; i< 10; i++){
        M[i] = A[i] * X;
        printf("%d, ", M[i]);
    }




}