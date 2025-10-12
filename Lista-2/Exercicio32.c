/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, sorteado;

    // Gera um número aleatório entre 1 e 5
    srand(time(NULL));
    sorteado = rand() % 5 + 1;

    printf("Tente adivinhar o número que o computador sorteou (1 a 5): ");
    scanf("%i", &numero);

    printf("O número sorteado foi: %i\n", sorteado);

    if (numero == sorteado) {
        printf("Parabéns! Você acertou!\n");
    } else {
        printf("Que pena! Você errou.\n");
    }

    return 0;
}