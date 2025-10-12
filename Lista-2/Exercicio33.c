/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float valorCasa, salario, prestacao;
    int anos;
    int meses;
    
    printf("Informe o valor da casa: R$ ");
    scanf("%f", &valorCasa);

    printf("Informe seu salário: R$ ");
    scanf("%f", &salario);

    printf("Em quantos anos pretende pagar? ");
    scanf("%i", &anos);

    meses = anos * 12;
    prestacao = valorCasa / meses;

    printf("\nO valor da prestação será: R$ %.2f\n", prestacao);

    // verifica se a prestação excede 30% do salário
    if (prestacao <= (salario * 0.3)) 
        printf("Empréstimo APROVADO!\n");
     else 
        printf("Empréstimo NEGADO!\n");
    
    return 0;
}