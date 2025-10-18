/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float km, preco;
    printf("Qual a distancia em km você deseja percorrer?:");
    scanf("%f", &km);
    
    if (km <= 200)
    preco = km * 0.50; 
    
    else
    
    preco = km * 0.45;
    
    printf("O valor da passagem é: R$ %.2f", preco);
 
    return 0;
}
