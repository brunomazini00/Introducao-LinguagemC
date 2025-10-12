//3. Crie um programa que leia o nome e o salário de um funcionário, mostrando no final 
//uma mensagem. Ex: Nome do Funcionário: Maria do Carmo Salário: 1850,45 O 
//funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.

#include <stdio.h>

int main()
{
    char nome[50];
    float salario;
    
    printf("Qual o nome do funcionario?: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome,"\n")] = '\0';
  
    printf("Qual o salário do funcionario?: ");
    scanf("%f", &salario);
    
    printf( "O Funcionário %s, recebe o salário de: R$%.2f em Junho", nome, salario);

    return 0;
}
