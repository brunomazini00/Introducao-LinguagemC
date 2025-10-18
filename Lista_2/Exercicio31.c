/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int jogador1, jogador2;

    printf("Jogo JoKenPo (Pedra, Papel ou Tesoura)\n");
    printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");

    printf("Jogador 1, escolha sua opção: ");
    scanf("%i", &jogador1);

    printf("Jogador 2, escolha sua opção: ");
    scanf("%i", &jogador2);

    
    printf("\nJogador 1 escolheu: %i\n", jogador1);
    printf("Jogador 2 escolheu: %i\n", jogador2);

  
    if (jogador1 == jogador2) {
        printf("Empate!\n");
    } 
    else if ((jogador1 == 1 && jogador2 == 3) ||
             (jogador1 == 2 && jogador2 == 1) ||
             (jogador1 == 3 && jogador2 == 2)) {
        printf("Jogador 1 venceu!\n");
    } 
    else {
        printf("Jogador 2 venceu!\n");
    }

    return 0;
}