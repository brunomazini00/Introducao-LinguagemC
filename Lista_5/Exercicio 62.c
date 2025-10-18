#include <stdio.h>
#include <ctype.h> // toupper()

int main()
{
    int idade;
    int totalIdades = 0;
    int somaIdades = 0;
    int pessoas21Mais = 0;
    char continuar;

    do
    {
     
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        totalIdades++;
        somaIdades += idade;

        if (idade >= 21)
        {
            pessoas21Mais++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar); 

    } while (continuar == 'S');


    printf("\n");
    printf("Total de idades digitadas: %d\n", totalIdades);
    printf("Media das idades: %.2f\n", (float)somaIdades / totalIdades);
    printf("Pessoas com 21 anos ou mais: %d\n", pessoas21Mais);

    return 0;
}