/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    if (numero % 2 == 0)
    printf("O número %i é par\n",numero);
    else 
    printf("O número %i é impar",numero);
    
    return 0;
}
