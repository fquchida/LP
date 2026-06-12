#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[],int,int);
int buscaRA(Aluno[],int,int);
void imprimeTurma(Aluno[],int);

int main(){
    int op=0;
    Aluno turmaLP[3];
    int n=0, RA;

    while(op!=5){
        system("clear");
        imprimeMenu();
        scanf("%d",&op);
        switch(op){
            case 1:
                if(n==50)
                    printf("\nTurma Lotada!\n");
                else{
                    printf("\nRA: ");
                    scanf("%d",&RA);
                    getchar();
                    if(!buscaRA(turmaLP,n,RA)){
                        insereAluno(turmaLP,n,RA);
                        n++;
                    }
                    else{
                        printf("\nRA já existe.\n");
                    }
                }
                break;
            case 2:
                if(n==0){
                    printf("\nTurma vazia!\n");
                }
                else{
                    imprimeTurma(turmaLP,n);
                }
                break;
            case 3:
                int RAbusca;
                printf("\nInsira RA a ser buscado: ");
                scanf("%d", &RAbusca);
                if(RAbusca==-1){
                    printf("\nAluno nao encontrado!\n");
                    break;
                }
                imprimeAluno(turmaLP, encontrarAluno(turmaLP,n,RAbusca));
                int opBusca = 0;
                printf("\n Deseja alterar alguma informacao?:");
                printf("\n1 - Nome");
                printf("\n2 - RA");
                printf("\n3 - Notas");
                printf("\n4 - Frequencia");
                printf("\n5 - Sair");
                printf("\nOpção: ");
                scanf("%d", &opBusca);
                switch(opBusca){
                    case 1:
                        char nomeNovo[30];
                        printf("\nDigite o novo nome: ");
                        fgets(nomeNovo, sizeof(nomeNovo), stdin);
                        nomeNovo[strlen(nomeNovo)-1] = '\0';
                        strcpy(turmaLP[encontrarAluno(turmaLP,n,RAbusca)].nome, nomeNovo);
                        printf("\nNome trocado!");
                        break;
                    case 2:
                        printf("\nDigite o novo RA: ");
                        scanf("%d", &turmaLP[encontrarAluno(turmaLP,n,RAbusca)].RA);
                        printf("\nRA trocado!");
                        break;
                    case 3:
                        int QualNota = 0;
                        printf("\nQual nota deseja alterar? 1,2 ou 3? ");
                        scanf("%d", &QualNota);
                        printf("\nNova nota: ");
                        scanf("%d", &turmaLP[encontrarAluno(turmaLP,n,RAbusca)].notas[QualNota-1]);
                        printf("\nNota trocada!");
                        break;
                    case 4:
                        printf("\nDigite novo valor de frequencia: ");
                        scanf("%d", &turmaLP[encontrarAluno(turmaLP,n,RAbusca)].frequencia);
                        printf("\nFrequencia trocada!");
                        break;
                    case 5:
                        printf("\nTchau!");
                        break;
                    default:
                        printf("\nOpção incorreta.");
                        break;

                }
                


            case 5:
                printf("\nTchau!");
                break;
            default:
                printf("\nOpção incorreta.");
                break;
        }
    }
}

void imprimeMenu(){
    printf("\nMenu:");
    printf("\n1 - Inserir Aluno");
    printf("\n2 - Imprime Turma");
    printf("\n3 - Encontrar Aluno");
    printf("\n5 - Sair");
    printf("\nOpção: ");
}

void insereAluno(Aluno tLP[],int n,int RA){
    printf("\nNome: ");
    fgets(tLP[n].nome,sizeof(tLP[n].nome),stdin);
    tLP[n].nome[strlen(tLP[n].nome)-1] = '\0';
    tLP[n].RA = RA;
    printf("RA: %d\n",tLP[n].RA);
    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&tLP[n].notas[i]);
    }
    printf("Frequencia: ");
    scanf("%d",&tLP[n].frequencia);
}

int buscaRA(Aluno tLP[],int n,int RA){
    for(int i=0;i<n;i++){
        if(RA==tLP[i].RA)
            return 1;
    }
    return 0;
}

int encontrarAluno(Aluno tLP[],int n,int RA){
    for(int i=0;i<n;i++){
        if(RA==tLP[i].RA)
            return i;
    }
    return -1;
}

void imprimeTurma(Aluno tLP[],int n){
    for(int i=0;i<n;i++){
        printf("\nAluno %d",i+1);
        printf("\nNome: %s",tLP[i].nome);
        printf("\nRA: %d",tLP[i].RA);
        for(int j=0;j<3;j++){
            printf("\nNota %d: %.1f",j+1,tLP[i].notas[j]);
        }
        printf("\nPresenca: %d\n",tLP[i].frequencia);
    }
    getchar();
    getchar();
}

void imprimeAluno(Aluno tLP[],int i){
    printf("\nAluno %d",i+1);
    printf("\nNome: %s",tLP[i].nome);
    printf("\nRA: %d",tLP[i].RA);
    for(int j=0;j<3;j++){
        printf("\nNota %d: %.1f",j+1,tLP[i].notas[j]);
    }
    printf("\nPresenca: %d\n",tLP[i].frequencia);
    
    getchar();
    getchar();
}