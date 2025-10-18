#include <stdio.h>

int main()
{
    int numero, i;

    // Solicita o número
    printf("Digite um valor: ");
    scanf("%i", &numero);

    printf("Tabuada de %i:\n", numero);

    // Laço "para" para calcular a tabuada
    for (i = 1; i <= 10; i++)
    {
        printf("%i x %i = %i\n", numero, i, numero * i);
    }

    return 0;
}