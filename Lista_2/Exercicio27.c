/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, media;
    printf("Qual a primeira nota do aluno?:");
    scanf("%f", &n1);
    
    printf("Qual a segunda nota do aluno?:");
    scanf("%f", &n2);
    
    media = n1 + n2 / n2;
    
    if( media <= 4.9)
    printf("O aluno teve media %.2f e foi reprovado!", media);
    
    else if (media >= 5.0 && media <= 6.9 )
    printf("O aluno teve media %.2f e esta de recuperação!", media);
    
    else if (media >= 7.0)
    printf("O aluno teve media %.2f e foi aprovado!", media);

    return 0;
}
