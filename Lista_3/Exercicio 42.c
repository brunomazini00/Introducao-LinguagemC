#include <stdio.h>

int main()
{
    int numero, contador = 1;

    printf("Digite um numero inteiro e positivo:");
    scanf("%i", &numero);

    while (contador <= numero)
    {
        printf("%i, ", contador);
        contador++;
    }
    printf("Acabou!\n");

    return 0;
}