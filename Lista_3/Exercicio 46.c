#include <stdio.h>

int main()
{

    int n = 6; 
    int soma = 0;

    while (n <= 100)
    {
        soma += n;
        n += 2;
    }
    printf("A soma de 6 + 8 + 10 + 12 + 14 ... + 98 + 100 = %i",soma);
}