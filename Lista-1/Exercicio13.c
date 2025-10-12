//
#include <stdio.h>

int main()
{
    float salario, aumento, novo_salario;
    
    printf("Qual seu salário?: ");
    scanf("%f", &salario);
    
    aumento = salario * 0.15;
    novo_salario = salario + aumento;
    
    printf("O novo salário com aumento de 15%% é :%.2f",novo_salario);

    return 0;
}
