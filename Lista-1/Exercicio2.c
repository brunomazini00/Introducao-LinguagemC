//2. FaC'a um programa que leia o nome de uma pessoa e mostre uma mensagem de boasvindas para ela: Ex: Qual C) o seu nome? JoC#o da Silva OlC! JoC#o da Silva, C) um prazer te
//conhecer!

#include <stdio.h>

int main()
{
	char nome[100];
	
	printf("Qual o seu nome?:");
	fgets(nome, sizeof(nome),stdin);
	
	nome[strcspn(nome,"\n")] = '\0';

	printf("Olá, %s, é um prazer te conhecer", nome);
	return 0;
}
