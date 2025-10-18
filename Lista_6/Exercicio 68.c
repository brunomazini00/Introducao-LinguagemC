#include <stdio.h>
#include <ctype.h> 

int main()
{
    char sexo;
    float peso;
    int mulheres = 0;
    int homensMais100 = 0;
    float somaPesoMulheres = 0;
    float maiorPesoHomem = 0;
    int i;

    for (i = 1; i <= 8; i++)
    {
        
        printf("Pessoa %i - Digite o sexo (M/F) e o peso (kg): ", i);
        scanf(" %c %f", &sexo, &peso);
        sexo = toupper(sexo); 

        if (sexo == 'F')
        {
            mulheres++;
            somaPesoMulheres += peso;
        }
        else if (sexo == 'M')
        {
            if (peso > 100)
                homensMais100++;
            if (peso > maiorPesoHomem)
                maiorPesoHomem = peso;
        }
    }


    printf("\n");
    printf("Quantidade de mulheres cadastradas: %i\n", mulheres);
    printf("Quantidade de homens com mais de 100kg: %d\n", homensMais100);

    if (mulheres > 0)
        printf("Media de peso das mulheres: %.2f kg\n", somaPesoMulheres / mulheres);
    else
        printf("Nao ha mulheres cadastradas.\n");

    if (maiorPesoHomem > 0)
        printf("Maior peso entre os homens: %.2f kg\n", maiorPesoHomem);
    else
        printf("Nao ha homens cadastrados.\n");

    return 0;
}