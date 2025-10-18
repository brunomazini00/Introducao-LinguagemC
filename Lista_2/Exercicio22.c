/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int aniversario,ano, x, idade;
    printf("Qual a ano do seu aniversário?:");
    scanf("%i", &aniversario);
    
    printf("Qual o ano atual?:");
    scanf("%i", &ano);
    
    idade = ano - aniversario;
    
    if(idade <18){
    x = 18 - idade;
    printf("Você é menor de idade, não precisa se alistar. Faltam %i anos para o alistamento\n",x);
    }
  else if (idade == 18){
  printf("Você deve se alistar!\n");
  }
  else{
  x = idade - 18; 
  printf("Seu tempo de alistamento já passou há %i anos\n",x);
  }
  
    
    return 0;
}
