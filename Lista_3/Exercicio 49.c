#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, pares, impares;
    int soma = 0;
    int i = 1;

    printf("Digite 6 numeros inteiros separados por espaco:\n");
    scanf("%i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6);

    while (i <= 6) {
        if (i == 1) soma += n1;
        else if (i == 2) soma += n2;
        else if (i == 3) soma += n3;
        else if (i == 4) soma += n4;
        else if (i == 5) soma += n5;
        else if (i == 6) soma += n6;

        i++;
    }

    printf("A soma dos numeros digitados = %i\n", soma);

    return 0;
}