#include <stdio.h>

int main()
{
    int n1, n2, contador, incremento = 3;
    printf("Digite o primeiro valor:");
    scanf("%i", &n1);

    printf("Digite o ultimo valor:");
    scanf("%i", &n2);

    printf("Digite o valor do incremento:");
    scanf("%i", &incremento);

    contador = n1; // começa a contagem pelo valor inicial

      if(n1 < n2) {
    while (contador <= n2) {
    printf("%i ", contador);
        contador += incremento;
    }
}

else if (n1 > n2){
    while(contador >= n2){
        printf("%i ", contador);
        contador -= incremento;
    }
}

//Caso valores sejam iguais 

else{
    printf("%i", contador);
}
    printf("Acabou!");
    return 0;
}