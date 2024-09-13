#include <stdio.h>

int count_divisors(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0){
			count++;
		}
	}
	return count;
}

int calculate_factorial(int n){
	int factorial = 1;
	for (int i = 1; i <= n; i++){
		factorial *= i;
	}
	return factorial;
}

int calculate_sum(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

int main(){
	int m;
	int control_var = 1;
	
	while (control_var) {
		printf("Digite um numero inteiro e positivo (ou '0' para sair):  ");
		scanf("%d", &m);
		if (m == 0) {
			control_var = 0;
		} else {
			if (m % 2 == 0){
				int divisors = count_divisors(m);
				printf("O numero %d eh par e possui %d divisores\n", m, divisors);
			} else {
				if (m < 10) {
					int factorial = calculate_factorial(m);
					printf("O numero %d eh impar e menor que 10, seu fatorial eh %d\n", m, factorial);
				} else {
					int sum = calculate_sum(m);
					printf("O numero %d eh impar e maior ou igual a 10. A soma dos inteiros de 1 ate %d eh %d\n", m, m, sum);
				}
			}
		}
	}
	return 0;
}
