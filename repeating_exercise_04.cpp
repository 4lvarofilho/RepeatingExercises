#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int is_valid_binary(char *binary) {
    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            return 0;
        }
    }
    return 1;
}

int binary_to_decimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    char *binary;
    int length;

    printf("Digite o tamanho do valor binario: ");
    scanf("%d", &length);

    binary = (char *)malloc((length + 1) * sizeof(char));
    if (binary == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Insira um valor binario: ");
    scanf("%s", binary);

    if (!is_valid_binary(binary)) {
        printf("Erro: input invalido.\n");
    } else {
        int decimal = binary_to_decimal(binary);
        printf("O valor decimal correspondente eh: %d\n", decimal);
    }

    free(binary);

    return 0;
}
