#include <stdio.h>

int main(){
    int vet[50];
    for (int i = 0; i < 50; i++){
        printf("\nInsira o valor desejado: ");
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 50; i++){
        for (int a = 0; i < 50; i++){
            if (vet[i] == vet[a] && i != j){
                if (i < a){
                    break;
                }
                printf("\nNumero repetido encontrado, nas posicoes %d, e %d", i, a);
            }
        }
    }

}
