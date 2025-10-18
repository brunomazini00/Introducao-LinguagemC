/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[50];
    float salario, novoSalario;
    int anos;
    
    printf("Qual o nome do funcionário?:");
    scanf(" %s", nome);
    
    printf("Qual o salário do funcionário?:");
    scanf("%f", &salario);
    
    printf("A quantos anos o funcionário trabalha na empresa?:");
    scanf("%i", &anos);
    
    
   if (anos <= 3)
   novoSalario = salario + (salario * 0.03);
   else if (anos >3 && anos < 10)
   novoSalario = salario + (salario * 0.125);
   else if (anos >= 10)
   novoSalario = salario + (salario * 0.20);
    
    printf("O nome do funcionario é:%s\n", nome);
    printf("O salário do funcionário é:%.2f\n", salario);
    printf("O funcionário trabalha na empresa há %i anos\n", anos);
    printf("O novo salário do funcionario é:R$%.2f\n", novoSalario);
    

    return 0;
}
