/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    
    if (sg1 < sg2 + sg3 && sg2 < sg1 + sg3 && sg3 < sg1 + sg2){
    
    printf("Os segmentos podem formar um triângulo \n");
    
    if (sg1 == sg2 && sg2 == sg3) {
            printf("Tipo: Equilátero (todos os lados iguais)\n");
        } 
        else if (sg1 == sg2 || sg1 == sg3|| sg2 == sg3) {
            printf("Tipo: Isóceles (dois lados iguais)\n");
        } 
        else {
            printf("Tipo: Escaleno (todos os lados diferentes)\n");
        }
    } 
    else {
        printf("Os segmentos NAO PODEM formar um triângulo.\n");
    }
    return 0;
}
