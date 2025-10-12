/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float largura, altura, area, tinta;
    
    printf("Qual a largura da parede? ");
    scanf("%f", &largura);
    
    printf("Qual a altura da parede? ");
    scanf("%f", &altura);
    
    area = altura * largura; 
    tinta = area /2;

    printf("A área a ser pintada é: %.2f m² \nA quantidade de tinta nescessária é %.2f litros", area, tinta);
    return 0;
}
