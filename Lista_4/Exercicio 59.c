#include <stdio.h>
#include <ctype.h> // toupper

int main()
{
    int idade;
    int maiorIdade = 0;
    int totalHomens = 0;
    int idadeMulherJovem = 0;
    int somaIdadeHomens = 0; // para calcular média
    int mulher1 = 1;         // 1 = ainda não cadastrou nenhuma mulher
    int flag = 0;          
    char sexo, continuar;

    while (flag == 0)
    {
        // vai ler as idade e sexo na mesma linha
        printf("Qual a idade e o sexo (M/F) da pessoa: ");
        scanf("%d %c", &idade, &sexo);

        sexo = toupper(sexo);

        // Maior idade
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }

        // homem
        if (sexo == 'M')
        {
            totalHomens++;
            somaIdadeHomens += idade;
        }

        //  mulher
        if (sexo == 'F')
        {
            if (mulher1)
            {
                idadeMulherJovem = idade;
                mulher1 = 0; // já cadastrou a primeira mulher
            }
            else if (idade < idadeMulherJovem)
            {
                idadeMulherJovem = idade;
            }
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);

        if (continuar == 'N')
            flag = 1;
    }

    
    printf("Maior idade lida: %d\n", maiorIdade);
    printf("Total de homens: %d\n", totalHomens);

    if (mulher1)
        printf("Nenhuma mulher cadastrada.\n");
    else
        printf("Idade da mulher mais jovem: %d\n", idadeMulherJovem);

    if (totalHomens > 0)
        printf("Media de idade dos homens: %.2f\n", (float)somaIdadeHomens / totalHomens);
    else
        printf("Nao ha homens cadastrados.\n");

    return 0;
}