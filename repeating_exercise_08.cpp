#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não eh definido para números negativos.\n");
    } else {
        unsigned long long result = factorial(n);
        printf("O fatorial de %d eh %llu.\n", n, result);
    }

    return 0;
}

