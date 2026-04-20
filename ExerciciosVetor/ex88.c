#include <stdio.h>

int main(){
    int vet[20];
    int tem = 0;
    do{
        for (int i = 0; i < 20; i++){
        printf("\nDigite o valor: ");
        scanf("%d", &vet[i]);
        }
        int nVerificar = 0;
        printf("\nDigite o valor para verificar: ");
        scanf("%d", &nVerificar);
        tem = 0;
        for (int i = 0; i < 20; i++){
            if(vet[i] == nVerificar){
                tem = 1;
                break;
            }
        }

    } while(tem = 1);
    
    


}