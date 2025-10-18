/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite seu peso kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura m: ");
    scanf("%f", &altura);
    
    // cálculo do IMC
    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } 
    else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: Peso ideal\n");
    } 
    else if (imc >= 25 && imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } 
    else if (imc >= 30 && imc < 40) {
        printf("Classificação: Obesidade\n");
    } 
    else {
        printf("Classificação: Obesidade mórbida\n");
    }

    return 0;
}