#include <stdio.h>

int main() {
    int i = 1, idade, homens = 0, mulheres = 0;
    int soma_idade = 0, soma_homens = 0, mulheres_20 = 0;
    char sexo;
    
    printf("=== CADASTRO ===\n");
    
    while (i <= 5) {
        printf("\nPessoa %d:\n", i);
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        
        // Validação básica do sexo
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Erro: Digite M ou F para o sexo!\n");
            continue;
        }
        
        soma_idade += idade;
        
        if (sexo == 'M' || sexo == 'm') {
            homens++;
            soma_homens += idade;
        } else {
            mulheres++;
            if (idade > 20) {
                mulheres_20++;
            }
        }
        
        i++;
    }
    
    // Cálculo das médias
    float media_grupo = soma_idade / 5.0;
    float media_homens = homens > 0 ? soma_homens / (float)homens : 0;
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    printf("a) Homens cadastrados: %d\n", homens);
    printf("b) Mulheres cadastradas: %d\n", mulheres);
    printf("c) Media de idade do grupo: %.1f anos\n", media_grupo);
    printf("d) Media de idade dos homens: %.1f anos\n", media_homens);
    printf("e) Mulheres com mais de 20 anos: %d\n", mulheres_20);
    
    return 0;
}