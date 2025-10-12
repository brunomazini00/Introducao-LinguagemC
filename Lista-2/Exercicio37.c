/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h> // toupper
int main() {
    char genero;
    int anos;
    float salario, novoSalario;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    printf("Digite o gênero do funcionário (M = Mulher, H = Homem): ");
    scanf(" %c", &genero);
    genero = toupper(genero); 

    printf("Digite há quantos anos o funcionário trabalha na empresa: ");
    scanf("%i", &anos);

    if (genero == 'M') {
        if (anos < 15)
            novoSalario = salario * 1.05;  // +5%
        else if (anos <= 20)
            novoSalario = salario * 1.12;  // +12%
        else
            novoSalario = salario * 1.23;  // +23%
    } 
    else if (genero == 'H') {
        if (anos < 20)
            novoSalario = salario * 1.03;  // +3%
        else if (anos <= 30)
            novoSalario = salario * 1.13;  // +13%
        else
            novoSalario = salario * 1.25;  // +25%
    } 
    else {
        printf("Gênero inválido!\n");
        return 1;
    }

    printf("\nO novo salário é: R$ %.2f\n", novoSalario);

    return 0;
}