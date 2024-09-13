#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int binary_to_decimal(char binary[]) {
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
	
	printf("Digite um valor binario: ");
	scanf("%s", binary);
	
	int decimal = binary_to_decimal(binary);
	printf("O valor decimal correspondente eh: %d\n", decimal);
	
	free(binary);
	
	return 0;
}
