#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){
int i = 0; //contador 
int numero; //para numero sorteado
int acima_de_5 = 0; //contador numero > 5
int divisiveis_por_3 = 0; //contador numero divisiveis por 3 

srand(time(NULL)); // inicializa sorteio com base no tempo

printf("Numeros sorteados:");

while (i < 20) {
    numero = rand () % 11; //gera numero entre 0 e 10
    printf("%i", numero);

    if(numero > 5)
    acima_de_5++;

    if(numero %3 == 0)
    divisiveis_por_3++;

    i++;
}

printf("\nAcima de 5: %i\n", acima_de_5);
printf("Divisiveis por 3: %i\n", divisiveis_por_3);

return 0;

}