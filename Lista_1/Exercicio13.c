//
#include <stdio.h>

int main()
{
    float salario, aumento, novo_salario;
    
    printf("Qual seu salario?: ");
    scanf("%f", &salario);
    
    aumento = salario * 0.15;
    novo_salario = salario + aumento;
    
    printf("O novo salario com aumento de 15%% = %.2f",novo_salario);

    return 0;
}
