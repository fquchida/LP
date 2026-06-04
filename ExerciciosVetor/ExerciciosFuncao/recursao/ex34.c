#include <stdio.h>

int inverterAux(int n, int inv) {
    if (n == 0)
        return inv;

    return inverterAux(n / 10, inv * 10 + n % 10);
}

int inverter(int n) {
    return inverterAux(n, 0);
}