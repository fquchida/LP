#include <stdio.h>

int main(){
    int vet[20];
    int maior = 0;
    int posMaior = 0;
    for (int i = 0; i < 20; i++){
        printf("\nInsira o %d° valor, apenas valores positivos: ");
        scanf("%d", &vet[i]);
        while (vet[i] <= 0){
            printf("\nInsira o %d° valor, apenas valores positivos: ");
            scanf("%d", &vet[i]);
        }
        if (vet[i] > maior){
            maior = vet[i];
            posMaior = i;
        }
    }
    printf("\nO maior valor e: %d", maior);
    printf("\nNa posicao: %d", posMaior);


}