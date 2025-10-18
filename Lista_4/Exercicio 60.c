#include <stdio.h>
#include <string.h>
#include <ctype.h> // para toupper()

int main()
{
    char nome[50], nomeMaisVelho[50], nomeMulherJovem[50];
    char sexo, continuar;
    int idade;
    int flag = 0;

    int somaIdades = 0;
    int totalPessoas = 0;
    int homensMais30 = 0;
    int mulheresMenos18 = 0;

    int maiorIdade = 0;
    int mulherJovemIdade = 0;
    int primeiraMulher = 1;

    while (flag == 0)
    {
        // Leitura de nome, idade e sexo na MESMA LINHA
        printf("\nDigite nome, idade e sexo (M/F): ");
        scanf(" %s %d %c", nome, &idade, &sexo);
        sexo = toupper(sexo);

      
        somaIdades += idade;
        totalPessoas++;

        // Pessoa mais velha
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }

        // Mulher mais jovem
        if (sexo == 'F')
        {
            if (primeiraMulher)
            {
                mulherJovemIdade = idade;
                strcpy(nomeMulherJovem, nome);
                primeiraMulher = 0;
            }
            else if (idade < mulherJovemIdade)
            {
                mulherJovemIdade = idade;
                strcpy(nomeMulherJovem, nome);
            }

            if (idade < 18)
                mulheresMenos18++;
        }

        // Homens com mais de 30
        if (sexo == 'M' && idade > 30)
        {
            homensMais30++;
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);

        if (continuar == 'N')
            flag = 1;
    }

    
    printf("Pessoa mais velha: %s (%d anos)\n", nomeMaisVelho, maiorIdade);

    if (primeiraMulher)
        printf("Nenhuma mulher cadastrada.\n");
    else
        printf("Mulher mais jovem: %s (%d anos)\n", nomeMulherJovem, mulherJovemIdade);

    if (totalPessoas > 0)
        printf("Media de idade do grupo: %.2f\n", (float)somaIdades / totalPessoas);

    printf("Homens com mais de 30 anos: %d\n", homensMais30);
    printf("Mulheres com menos de 18 anos: %d\n", mulheresMenos18);

    return 0;
}