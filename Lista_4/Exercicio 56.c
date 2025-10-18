#include <stdio.h>

int main()
{

    int numero, soma = 0;
    int flag = 0; // 0 = continua, 1 = para

    printf("Digite numero para somar (1111 para parar):\n");

    while (flag == 0)
    {
        printf("numero: ");
        scanf("%i", &numero);

        if (numero == 1111)
        {
            flag = 1; // Ativa a flag para sair do loop
        }
        else
        {
            soma += numero;
        }
    }
    printf("Soma: %i\n", soma);
    return 0;
}