/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h> // uso do toupper()

int main() {
    char tipo;
    int dias;
    float km, total, valorDia, valorKm;
    
    printf("Digite o tipo de carro (P = Popular, L = Luxo): ");
    scanf(" %c", &tipo);

    tipo = toupper(tipo); 

    printf("Quantos dias de aluguel? ");
    scanf("%i", &dias);

    printf("Quantos Km foram percorridos? ");
    scanf("%f", &km);

    if (tipo == 'P') {
        valorDia = 90;
        if (km <= 100)
            valorKm = km * 0.20;
        else
            valorKm = km * 0.10;
    } 
    else if (tipo == 'L') {
        valorDia = 150;
        if (km <= 200)
            valorKm = km * 0.30;
        else
            valorKm = km * 0.25;
    } 
    else {
        printf("Tipo de carro inválido!\n");
        return 1;
    }

    total = (valorDia * dias) + valorKm;
    printf("\nO valor total a pagar é: R$ %.2f\n", total);

    return 0;
}