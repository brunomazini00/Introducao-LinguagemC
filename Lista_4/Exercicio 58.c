#include <stdio.h>

int main()
{

    int idade;
    int total_alunos = 0;
    int somaIdades = 0;
    int flag = 0;

    while (flag == 0)
    {

        printf("Digite a idade do aluno ou caso deseje parar digite (999):");
        scanf("%i", &idade);

        if (idade == 999)
        {
            flag = 1; // Sair do loop
        }else{
            somaIdades += idade;
            total_alunos++;
        }
    }
    if (total_alunos > 0) {

        float media = (float)somaIdades / total_alunos;
        printf("Total de alunos %i\n", total_alunos);
        printf("Media de idade:%.2f", media);
    }
    else
    {
        printf("Nenhum aluno registrado");
    }

    return 0;
    
}