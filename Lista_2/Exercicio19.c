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
    printf("Digite a primeira nota:");
    scanf("%f", &n1);
     
    printf("Digite a segunda nota:");
    scanf("%f", &n2);
    
    media = (n1 + n2) / 2 ; 
    
    printf("A média do aluno é: %.2f\n", media);
    
    if(media < 7)
    printf("O aluno não teve um bom aproveitamento\n");
    
    else if (media > 7)
    printf("O Aluno teve um bom aproveitamento");
    

    return 0;
}
