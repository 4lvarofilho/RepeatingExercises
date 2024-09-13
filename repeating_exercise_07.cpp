#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("O numero %d eh primo\n", num);
    } else {
        printf("O numero %d nao eh primo\n", num);
    }

    return 0;
}

