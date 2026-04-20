#include <stdio.h>

int main(){
    int N = 0;
    printf("\n Digite o tamanho dos vetores");
    scanf("%d", &N);
    int vA[N];
    int vB[N];
    int vSoma[N];

    for (int i = 0; i < N; i++){
        printf("\n Digite o termo do vetor A");
        scanf("%d", &vA[i]);
    }
    
    for (int i = 0; i < N; i++){
        printf("\n Digite o termo do vetor B");
        scanf("%d", &vB[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++){
        vSoma[i] = vA[i] + vB[i];
        printf("%d, ", vSoma[i]);
    }
    

}