//
#include <stdio.h>

int main()
{

	int dias;
	float valordosalario;

	printf("Quantos dias foram trabalhados em um mês ?: ");
	scanf("%d", &dias);

	valordosalario = dias * 8 * 25;

	printf("O valor do salário do funcionario que trabalhou %d dias é :%.2f", dias, valordosalario);
	return 0;
}
