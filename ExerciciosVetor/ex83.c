#include <stdio.h>

int main(){
    int vet[20];
    int menor = 0;
    int posMenor = 0;
    for (int i = 0; i < 20; i++){
        printf("\nInsira o %d° valor: ");
        scanf("%d", &vet[i]);
    }
    for (int i = 19; i >= 0; i--){
        printf("%d", vet[i]);
    }


}