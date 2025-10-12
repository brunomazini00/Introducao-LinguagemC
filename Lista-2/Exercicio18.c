/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   float data_nascimento, idade, anoAtual;
   
   printf("Qual o ano atual?:");
   scanf("%f", &anoAtual);
   
   printf("Qual sua data de nascimento?:");
   scanf("%f", &data_nascimento);
   
   idade = anoAtual - data_nascimento;
   
   
   if (idade < 16){
   printf("Você tem %.0f anos é não pode votar!", idade );
       
   }else if  (idade > 70){
   printf("Você tem %.0f anos é o voto e opcional!", idade);
   }else {
   printf("Você tem %.0f anos é pode votar!", idade);
   }
   
   
   
   

    return 0;
}