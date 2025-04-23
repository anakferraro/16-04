#include <stdio.h>
#include "igualdade.h"

int recebeNumero() {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	return numero;
}

int main() {
	int num1 = recebeNumero();
	int num2 = recebeNumero();
	int num3 = recebeNumero();

	int maiorNumero = maior(maior(num1, num2), num3);

	printf("O maior numero e: %d\n", maiorNumero);
	return 0;
}