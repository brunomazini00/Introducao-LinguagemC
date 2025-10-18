//5. FaC'a um programa que leia as duas notas de um aluno em uma matC)ria e mostre na tela
//a sua mC)dia na disciplina. Ex: Nota 1: 4.5 Nota 2: 8.5 A mC)dia entre 4.5 e 8.5 C) igual a
//6.5
#include <stdio.h>

int main()
{
    float nota1, nota2, media; 
    
	printf("Escreva duas notas para descobrirmos a media do aluno\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) /2;
	
	printf("A media entre %.1f e %.1f = %.1f" ,nota1, nota2, media );

	return 0;
}
