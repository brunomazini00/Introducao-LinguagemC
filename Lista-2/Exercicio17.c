/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float velocidade, limite;
    printf("Qual a velocidade do carro?:");
    scanf ("%f", &velocidade);
    
 
    if(velocidade > 80) {
    printf("Voce foi multado! O valor da multa: R$%.2f", (velocidade - 80) * 5);
    } else {
        printf("Velocidade dentro do limite!");
    }
    

    return 0;
}