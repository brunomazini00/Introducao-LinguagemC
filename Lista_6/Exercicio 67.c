#include <stdio.h>

int main()
{
    int numero, i;

    printf("Digite um valor inteiro positivo: ");
    scanf("%i", &numero);

    printf("Contagem: ");

    for (i = 0; i <= numero; i++)
    {
        printf("%d", i);
        if (i != numero)
            printf(", "); // vírgula entre os números
    }

    printf(", FIM!");

    return 0;
}