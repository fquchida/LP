#include <stdio.h>
int tipoTriangulo(int a, int b, int c) {

    
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c ||
        a + c <= b ||
        b + c <= a) {
        return 0;
    }

    // Equilátero
    if (a == b && b == c) {
        return 1;
    }

    // Isósceles
    if (a == b || a == c || b == c) {
        return 2;
    }

    // Escaleno
    return 3;
}


int main(){}

