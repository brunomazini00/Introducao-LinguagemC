#include <stdio.h>

int main()
{
    int contador = 30;

    while (contador >= 1)
    {
        if (contador % 4 == 0)
        {

            printf("[%i] ", contador);
        }
        else
        {
            printf("%i ", contador);
        }

        contador--;
    }
    return 0;
}