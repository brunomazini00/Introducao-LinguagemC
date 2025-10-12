#include <stdio.h>

int main()
{

    int n = 500;
    int soma = 0;

while ( n >= 0)
{
    soma += n;
    n -= 50;

}

printf("A soma entre 500 + 450 + 400 + 350 + 300 + ... + 50 + 0 = %i",soma);


}