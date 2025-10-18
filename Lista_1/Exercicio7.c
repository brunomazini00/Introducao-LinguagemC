//7. Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça
//parte. Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666

#include <stdio.h>

int main()
{
    float numero, dobro, terca;
    
    printf("Vamos descobrir o dobro e a terca parte de um numero?\n");
    printf("Digite um numero:");
    scanf("%f", &numero);

    dobro = numero * 2;
    terca = numero / 3;
    
    printf("O dobro do numero %.2f: %.2f e sua terca parte: %.5f", numero, dobro, terca);
    return 0;
}
