#include <stdio.h>

int main() {
    int n;

    do {
        printf("Digite um número entre 2 e 20: ");
        scanf("%d", &n);
    } while (n < 2 || n > 20);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
