//

#include <stdio.h>

int main()
{
    float reais, dolar, cotacao;
    printf("Quanto em reais você tem na carteira ?: ");
    scanf("%f", &reais);
    
    cotacao = 3.45;
    dolar =  reais / cotacao;
   
    printf("Com %.2f reais você pode comprar %.2f dolares.", reais, dolar);
    

    return 0;
}
