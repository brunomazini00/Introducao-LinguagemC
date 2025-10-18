#include <stdio.h>

int main()
{

    float preco, maior, menor;
    int contador = 1;

    printf("Digite o preco do produto 1: R$");
    scanf("%f", &preco);

    maior = preco;
    menor = preco;

    
    while (contador < 8) {
    printf("Digite o preco do produto %i: R$",contador +1);
    scanf("%f", &preco);

    if (preco > maior){
        maior = preco;
    }

    if (preco < menor){
        menor = preco;
    }

    contador++;
}
 
printf("Maior preco : R$ %.2f\n", maior);
printf("Menor preco : R$ %.2f\n", menor);

    return 0;
}