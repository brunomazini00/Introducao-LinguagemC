/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    float horas, pontos, dinheiro;

    printf("Quantas horas de atividade física você teve no mês? ");
    scanf("%f", &horas);

    if (horas <= 10)
        pontos = horas * 2;
    else if (horas <= 20)
        pontos = horas * 5;
    else
        pontos = horas * 10;

    dinheiro = pontos * 0.05;

    printf("\nVocê ganhou %.2f pontos.\n", pontos);
    printf("Isso equivale a R$ %.2f.\n", dinheiro);

    return 0;
}