#include <stdio.h>

int main(){
    float temp[365];
    float maior = 0;
    float menor = 0;
    float soma = 0;
    float media = 0;
    float inferior = 0;
    for (int i = 0; i < 365; i++){
        printf("\nInsira a temperatura ");
        scanf("%f", &temp[i]);
        if (temp[i] > maior){
            maior = temp[i];
        }
        if (temp[i] < menor){
            menor = temp[i];
        }
        soma += temp[i];
    }
    media = soma/365;
    for (int i = 0; i < 365; i++){
        if(temp[i] < media){
            inferior++;
        }
    }
    printf("\n A maior temperatura foi: ", maior);   
    printf("\n A menor temperatura foi: ", menor);   
    printf("\n A media foi: ", media);
    printf("\n Numeros de dias abaixo da media foi:", inferior);   



}
