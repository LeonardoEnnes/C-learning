#include <stdio.h>

//5. Elabore um programa que leia dois valores inteiros e imprima a soma deles. Antes do resultado, deverá aparecer a mensagem: “Soma = ”

int main(){
  int n1;
  int n2;
  int soma;

  printf("\n Digite o valor 1:");
  scanf("%d", &n1);

   printf("\n Digite o valor 2:");
  scanf("%d", &n2);

  soma = (n1 + n2);
  printf("Soma = %d", soma);
}