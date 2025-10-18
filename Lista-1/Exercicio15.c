//
#include <stdio.h>

int main()
{

	int dias;
	float valordosalario;

	printf("Quantos dias foram trabalhados em um mes ?: ");
	scanf("%d", &dias);

	valordosalario = dias * 8 * 25;

	printf("O valor do salario do funcionario que trabalhou %d dias = %.2f", dias, valordosalario);
	return 0;
}
