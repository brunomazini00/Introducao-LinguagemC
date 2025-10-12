//
#include <stdio.h>

int main()
{
    int cigarro;
    float anos, total_perda;
    
    printf("********* Programa para redução do uso de cigarros ********* \n");
    
    printf("Quantos cigarros você fuma por dia? :");
    scanf("%d", &cigarro);
    
    printf("Por quantos anos você fumou? :");
    scanf("%f", &anos);
    
    //1 dia = 24 horas = 24 × 60 = 1440 minutos
    //10 minutos / 1440 minutos = 0,00694 dias
     total_perda = cigarro * 365 * anos * 0.00694;

   printf("O total de dias de vida perdidos para um fumante, que fuma %d cigarros por dia durante %.0f anos é: %.1f dias" , cigarro, anos, total_perda);
    return 0;
}