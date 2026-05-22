#include <stdio.h>

int strlen(char a[]){
    int cont = 0;
    int i = a[0];
    while (i != '\0'){
        i = cont;
        cont++;
    }
    return cont;
}

int strcmp(char a[], char b[]){
    if(strlen(a) == strlen(b)){
        for(int i = 0; i < strlen(b); i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

void concatenar(char a[], char b[]){
    int i=0; 
    int j=0;
    char resultado[strlen(a)+strlen(b)];
    while (a[i] != '\0'){
        resultado[i] = a[i];
        i++;
    }
    while (b[j] != '\0'){
        resultado[i] = a[j];
        i++;
        j++;
    }
    printf("%s", resultado);
}