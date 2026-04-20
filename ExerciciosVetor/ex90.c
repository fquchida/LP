#include <stdio.h>

int main(){
    int vet[30];
    int tem = 0;

    for (int i = 0; i < 30; i++){
    printf("\nDigite o valor: ");
    scanf("%d", &vet[i]);
    }
    int nVerificar = 0;
    printf("\nDigite o valor para verificar: ");
    scanf("%d", &nVerificar);
    tem = 0;
    for (int i = 0; i < 30; i++){
        if(vet[i] == nVerificar){
            tem++;
                
        }
    }
    printf("\n %d", tem);


    
    


}