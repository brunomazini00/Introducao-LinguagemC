#include <stdio.h>

int main()
{

    int numero = 0;

    do
    {
        printf("%i ", numero);

        numero += 3; // Soma do exercício sempre de 3 em 3

    } while (numero <= 30);

    printf("Acabou!");

    return 0;
}