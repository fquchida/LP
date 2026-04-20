#include <stdio.h>

int main(){
    int N = 15;
    printf("\n Digite o tamanho dos vetores");
    scanf("%d", &N);
    int vA[N];
    int vB[N];
    int iRepetidos;

    for (int i = 0; i < N; i++){
        printf("\n Digite o termo do vetor V1");
        scanf("%d", &vA[i]);
    }
    
    for (int i = 0; i < N; i++){
        printf("\n Digite o termo do vetor V2");
        scanf("%d", &vB[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++){
        if(vB == vA)iRepetidos++;
        
    }
    printf("\n");
    printf("\nO total de repetidos e: %d", iRepetidos);

    

}