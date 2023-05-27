#include <stdio.h>
/*

Elaborar um programa que deverá solicitar, repetidamente, a leitura de um número. O programa
deverá repetir enquanto o número informado for diferente de 0. Após deverá imprimir, quantos
números estavam no intervalo entre 100 (inclusive) e 200 (inclusive).

*/
int main(){
  int numero;
  int cont = 0;

  do
  {
   printf("Digite o numero");
   scanf("%d", &numero);

  if (numero > 100 && numero < 200)
  {
    cont++;
  }
  
  } while (numero != 0);

  printf("A quantidade de numeros entre 100 e 200 sao: %d", cont);
  
  return 0;
}