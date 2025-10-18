/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano;
    printf("Digite um ano:");
    scanf("%i", &ano);

    if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0))
    printf("O ano %i é bissexto!",ano);
    else
    printf("O ano %i Não é bissexto!", ano);
    
    return 0;
}
