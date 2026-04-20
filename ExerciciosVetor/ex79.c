#include <stdio.h>

int main(){
    float notas[20];
    int notasboas = 0;
    float totalnotas;
    for (int i = 0; i<20; i++){
        printf("\nDigite a nota do %d° aluno: ", i);
        scanf("%f", &notas[i]);
        if(notas[1] >= 6){
            notasboas++;
        }
        totalnotas += notas[i];
    }
    printf("\nA media da turma e: %f", totalnotas/20);
    printf("\nA quantidade de notas acima da media e: %d", notasboas);
}