#include <stdio.h>
#include <ctype.h> // toupper()

int main()
{
    float salario, soma_homens = 0, soma_mulheres = 0;
    char sexo, continuar;
    int flag = 0; // 0 = continua, 1 = para

    while (flag == 0)
    {
                  // SALÁRIO
        printf("Qual o salario do funcionario: ");
        scanf("%f", &salario);

                     // SEXO
        printf("Qual o sexo do funcionario (M/F): ");
        scanf(" %c", &sexo); 

                // Soma Masculino
        if (sexo == 'M' || sexo == 'm')
        {
            soma_homens += salario;
        }        // Soma Feminino
        else if (sexo == 'F' || sexo == 'f')
        {
            soma_mulheres += salario;
        }
        else
        {
            printf("Sexo invalido! Use M ou F.\n");
            continue; // volta para o início do while
        }

        printf("Deseja cadastrar outro funcionario? (S/N): ");
        scanf(" %c", &continuar);

        if (toupper(continuar) == 'N')
        {
            flag = 1; // encerra o loop
        }
    }

    printf("\nSoma total dos salarios dos homens: R$ %.2f\n", soma_homens);
    printf("Soma total dos salarios das mulheres: R$ %.2f\n", soma_mulheres);

    return 0;
}
