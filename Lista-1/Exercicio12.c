//

#include <stdio.h>

int main()
{
    float produto, promocional, desconto;
    printf("Qual o preço do produto?: ");
    scanf("%f", &produto);
    
    desconto = produto * 0.05;
    promocional = produto - desconto;
    
    printf("O valor promocional do produto com 5%% de desconto é: %.2f", promocional);

    return 0;
}
