#include <stdio.h>

void decimal_to_binary(int n) {
    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Valor binario: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Valor binario: 0\n");
    } else {
        decimal_to_binary(num);
    }

    return 0;
}
