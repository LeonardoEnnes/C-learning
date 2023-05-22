#include <stdio.h>
//8. Elabore um programa para ler um número e escrever 
// a tabuada de 1 a 10 do número informado.
int main(){

 int i;
 int numero;

 printf("Digite o numero que deseja saber a tabuada: ");
 scanf("%d", &numero);

 for (i = 1; i <= 10; i++)
 {
  printf("%d x %d = %d\n", numero, i, numero * i);
 }
 


  return 0;
}
  
  
