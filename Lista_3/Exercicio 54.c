#include <stdio.h>

int main() {
    float peso, altura, soma_altura = 0;
    int p90 = 0, p50_160 = 0, p190_100 = 0;
    int i = 1;
    
    while(i <= 7) {
        printf("Pessoa %d - Peso e Altura: ", i);
        scanf("%f %f", &peso, &altura);
        
        soma_altura += altura;
        if(peso > 90) p90++;
        if(peso < 50 && altura < 1.60) p50_160++;
        if(altura > 1.90 && peso > 100) p190_100++;
        
        i++;
    }
    
    printf("Media altura: %.2f m\n", soma_altura / 7);
    printf("Pessoas +90kg: %d\n", p90);
    printf("Pessoas <50kg e <1.60m: %d\n", p50_160);
    printf("Pessoas >1.90m e >100kg: %d\n", p190_100);
    
    return 0;
}