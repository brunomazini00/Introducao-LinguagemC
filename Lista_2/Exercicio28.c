/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float largura, comprimento, area;
    printf("Qual a largura do terreno em metros?:");
    scanf("%f", &largura);
    
    printf("Qual o comprimento em metros?.");
    scanf("%f", &comprimento);
    
    area = largura * comprimento; 
    
    if (area < 100 )
    printf("O terreno é Popular");
    
    else if (area <= 500 )
    printf("O terreno é Master");
    
    else 
    printf("O terreno é  vip");

    return 0;
}
