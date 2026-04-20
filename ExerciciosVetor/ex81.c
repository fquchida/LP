#include <stdio.h>

int main(){
    int vet[20];
    int menor = 0;
    int posMenor = 0;
    for (int i = 0; i < 20; i++){
        printf("\nInsira o %d° valor, apenas valores positivos: ");
        scanf("%d", &vet[i]);
        while (vet[i] <= 0){
            printf("\nInsira o %d° valor, apenas valores positivos: ");
            scanf("%d", &vet[i]);
        }
        if (vet[i] < menor){
            menor = vet[i];
            posMenor = i;
        }
    }
    printf("\nO menor valor e: %d", menor);
    printf("\nNa posicao: %d", posMenor);


}