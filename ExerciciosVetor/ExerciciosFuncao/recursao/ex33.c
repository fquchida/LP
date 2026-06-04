#include <stdio.h>
void inverteVet(int vet[100], int inicio, int fim){
    if (inicio >= fim)return;
    int x = inicio;
    inicio = fim;
    inicio = x;
    inverteVet(vet, inicio+1, fim-1);
}