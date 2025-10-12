//
#include <stdio.h>

int main()
{
    int dias;
    float km, valor_pagar;
    
    printf("Por quantos dias o carro foi alugado?: ");
    scanf("%d" , &dias);
    
    printf("Quantos kms o carro rodou?: ");
    scanf("%f" , &km);
    
    valor_pagar = (dias * 90) + (km * 0.20);
    
    printf("O valor total a pagar é: %.2f ",valor_pagar);
    return 0;
}