#include <stdio.h>
#include <stdlib.h>

long fatorial(int n) {
    long resultado = 1;
    for (int i = 1; i <= n; i++)
        resultado *= i;
    return resultado;
}

long fatorial2(int n) {
    if (n == 0) return 1;
    else return n * fatorial2(n - 1);
}

long fib(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main(int argc, char* argv[]) {
    //    printf("Argc = %d\n", argc);
    //    for(int i = 0; i < argc; i++) {
    //        printf("arg %d = %s\n", i, argv[i]);
    //    }
    int n = atoi(argv[1]);
    printf("O fibonacci de %d é %ld\n", n, fib(n));
    return (EXIT_SUCCESS);
}
