#include <stdio.h>
// Elabore um programa em que o usuário informa um número e imprima todos os números de 1 até o
// número informado
int main(){
   
   int numero;
   int i;

   printf("Digite o numero");
   scanf("%d", &numero);

   for (i = 0; i < numero; i++)
   {
    printf("%d\n", i + 1);
   }
  
  return 0;
}