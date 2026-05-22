#include <stdio.h>

void imprimirBinario(int);
int main(){
   
    
}
void imprimirBinario(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int binario[32];
    int i = 0;

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
}