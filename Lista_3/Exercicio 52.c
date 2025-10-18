#include <stdio.h> 

int main(){

    int idade, soma_idade = 0, maiorIdade= 0;
    int contador = 1;
    int maior_18 = 0, menor_5 = 0;
    float media; 

   while(contador <= 10){
    printf("Qual a idade do individuo:",contador);
    scanf("%i", &idade);
    
    soma_idade += idade;

    if (idade > 18){
        maior_18++;
    }

    if(idade < 5){
       menor_5++;
    }

    if (idade > maiorIdade){
        maiorIdade = idade;

    }

    contador++;

   }

    media = soma_idade / 10.0;


    printf("A media de idade do grupo: %.1f anos\n",media);
    printf("Pessoas com mais de 18 anos:%i\n",maior_18);
    printf("Pessoas com menos de 5 anos:%i\n",menor_5);
    printf("Maior idade lida: %i anos \n", maiorIdade);


return 0; 
}