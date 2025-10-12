//
#include <stdio.h>

int main()
{
    float  a, b, c, delta;
    
    printf("Qual o valor A da equação: ");
    scanf("%f", &a );
    
printf("Qual o valor B da equação: ");
    scanf("%f", &b );
    
    printf("Qual o valor C da equação: ");
    scanf("%f", &c );
    
 
    delta = (b * b) - (4 * a * c);
    
    printf("O valor de delta é: %.2f", delta);
    
    return 0;
}