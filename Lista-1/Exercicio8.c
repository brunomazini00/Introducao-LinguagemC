//


#include <stdio.h>

int main()
{
	float metros, km, hm, dam, dm, cm, mm;

	printf("Digite um numero em metros:");
	scanf("%f", &metros);

	km = metros / 1000;
	hm = metros / 100;
	dam = metros / 10;
	dm = metros * 10;
	cm = metros * 100;
	mm = metros * 1000;

	printf("%.2f Metros é igual a: %.5f Km \n",metros, km);
	printf("%.2f Metros é igual a: %.4f hm \n",metros, hm);
	printf("%.2f Metros é igual a: %.3f Dam \n ",metros, dam);
	printf("%.2f Metros é igual a: %.1f dm \n ",metros, dm);
	printf("%.2f Metros é igual a: %.1f cm \n ",metros, cm);
	printf("%.2f Metros é igual a: %.1f cm \n ",metros, mm);

	return 0;
}