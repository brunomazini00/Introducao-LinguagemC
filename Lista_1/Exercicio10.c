
#include <stdio.h>

int main()
{
    float largura, altura, area, tinta;
    
    printf("Qual a largura da parede? ");
    scanf("%f", &largura);
    
    printf("Qual a altura da parede? ");
    scanf("%f", &altura);
    
    area = altura * largura; 
    tinta = area /2;

    printf("A area a ser pintada: %.2f metros quadrados. \nA quantidade de tinta nescessaria : %.2f litros", area, tinta);
    return 0;
}
