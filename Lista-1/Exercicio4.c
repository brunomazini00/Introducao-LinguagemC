//4. Desenvolva um algoritmo que leia dois nC:meros inteiros e mostre o somatC3rio entre
//eles. Ex: Digite um valor: 8 Digite outro valor: 5 A soma entre 8 e 5 C) igual a 13.
#include <stdio.h>

int main()
{
	int n1, n2, soma;
	
	printf("Digite um valor: ");
	scanf("%i", &n1);
	
	printf("Digite outro valor: ");
	scanf("%i", &n2);
	
	soma = n1 + n2;
	
	printf("A soma entre %i e %i = %d \n ",n1, n2, soma);

	return 0;
}
