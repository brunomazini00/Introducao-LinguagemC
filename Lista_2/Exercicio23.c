/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
    float valorCompra, desconto, valorTotal;
    char nome[100], sexo; 
    printf("Qual seu nome?:");
    scanf("%s", nome);
    
    printf("Qual seu sexo?[M/F]:");
    scanf(" %c", &sexo );
    
    printf("Qual o valor da sua compra?:");
    scanf("%f", &valorCompra);
    
    sexo = toupper(sexo); // usar para funcionar maiúscula e minúscula
    
    if( sexo == 'M'){
        desconto = valorCompra* 0.05;
        valorTotal = valorCompra - desconto;
    } else if (sexo == 'F'){
        desconto = valorCompra * 0.13;
        valorTotal = valorCompra - desconto;
    }
    
    printf("Nome do Cliente:%s\n", nome);
    printf("Desconto:R$ %.2f\n",desconto);
    printf("Valor total a pagar:R$%.2f",valorTotal);

    return 0;
}
