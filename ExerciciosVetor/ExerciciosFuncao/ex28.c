void fibonacciInfinito() {
    int a = 0, b = 1, prox;

    while (1) {
        printf("%d ", a);

        prox = a + b;
        a = b;
        b = prox;
    }
}