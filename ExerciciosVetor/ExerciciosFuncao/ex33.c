#include <stdio.h>

void divisores(int num) {

    printf("Divisores de %d:\n", num);

    for (int i = 1; i <= num; i++) {

        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}