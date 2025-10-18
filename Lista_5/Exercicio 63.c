#include <stdio.h>
#include <ctype.h> 

int main()
{
    int numero;
    int soma = 0;
    int total = 0;
    int pares = 0;
    int menor;
    int primeiro = 1; 
    char continuar;

    do
    {
        
        printf("Digite um numero: ");
        scanf("%d", &numero);

    
        soma += numero;
        total++;

        // Verifica se é par
        if (numero % 2 == 0)
        {
            pares++;
        }

        // Verifica o menor valor
        if (primeiro)
        {
            menor = numero;
            primeiro = 0;
        }
        else if (numero < menor)
        {
            menor = numero;
        }

        
        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar); 

    } while (continuar == 'S');

 
    printf("\n");
    printf("Somatorio dos valores: %d\n", soma);
    printf("Menor valor digitado: %d\n", menor);
    printf("Media dos valores: %.2f\n", (float)soma / total);
    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}