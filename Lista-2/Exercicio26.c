/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Digite o primeiro número inteiro:");
    scanf("%i", &n1);
    
    printf("Digite o segundo número inteiro:");
    scanf("%i", &n2);
    
    if (n1 > n2)
    printf("O primeiro valor é o maior.");
    
    else if (n2 > n1)
    printf("O segundo valor é o maior.");
    
    else if (n1 == n2)
    printf("Não existe valor maior, os dois são iguais.");
    
    return 0;
}
