#include <stdio.h>

int main()
{
    int primeiro, razao;
    int i;
    int termo;
    int soma = 0;

 
    printf("Digite o primeiro termo da PA: ");
    scanf("%i", &primeiro);
    printf("Digite a razao da PA: ");
    scanf("%i", &razao);

    printf("10 primeiros termos da PA:\n");

   
    for (i = 0; i < 10; i++)
    {
        termo = primeiro + i * razao; 
        printf("%i ", termo);
        soma += termo; 
    }

    printf("\nSoma dos termos: %i", soma);

    return 0;
}