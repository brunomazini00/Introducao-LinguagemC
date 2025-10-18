/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float sg1, sg2, sg3;
    printf("Digite o primeiro segmento:");
    scanf("%f", &sg1);

    printf("Digite o primeiro segmento:");
    scanf("%f", &sg2);
    
    printf("Digite o primeiro segmento:");
    scanf("%f", &sg3);
    
    if (sg1 < sg2 + sg3 && sg2 < sg1 + sg3 && sg3 < sg1 + sg2)
    
    printf("Os segmentos podem formar um triângulo \n");
    else 
        printf("Os segmentos NAO PODEM formar um triângulo.\n");
    
    return 0;
}
