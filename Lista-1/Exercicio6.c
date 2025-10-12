//6. FaC'a um programa que leia um nC:mero inteiro e mostre o seu antecessor e seu sucessor.
//Ex: Digite um nC:mero: 9 O antecessor de 9 C) 8 O sucessor de 9 C) 10

#include <stdio.h>

int main()
{
	int numero, antecessor, sucessor;
	printf("Vamos descobrir o antecessor e o sucessor de um nC:mero?\n");
	printf("Digite um numero inteiro:");
	scanf("%d", &numero);

	antecessor = numero - 1;
	sucessor = numero + 1;

	printf("O antecessor de %d C): %d e o sucessor C): %d ", numero, antecessor, sucessor);

	return 0;
}