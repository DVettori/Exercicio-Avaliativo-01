#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void) {
	int valor, j, sobra, novoValor = 0;
	scanf("%i", &valor);

	//pega os dígitos da direita para a esquerda
	for (j = 0; j < 6; j++) {
		sobra = valor - ((valor / 10)*10);
		//printf("%i \n", sobra);
		valor = valor / 10;
		novoValor += sobra * pow(2,j);
	}
	printf("Decimal: %i \n", novoValor);

	return 0;
}