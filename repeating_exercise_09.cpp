#include <stdio.h>

int main() {
    int n = 30;
    unsigned long long fibonacci[n];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("Os 30 primeiros numeros da sequencia de Fibonacci sao:\n");
    for (int i = 0; i < n; i++) {
        printf("%llu ", fibonacci[i]);
    }
    printf("\n");

    return 0;
}

