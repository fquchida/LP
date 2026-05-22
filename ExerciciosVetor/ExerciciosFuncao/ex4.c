#include <stdio.h>
#include <string.h>

#define N 100
void inverter();

int main(){

}

void inverter(){

    char nome[100];
    char iNome[100];
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '\0';
    for(int i = 0; i < sizeof(nome); i++){
        iNome[i] = nome[sizeof(nome-i)];
    }
    printf("%s", iNome);
}