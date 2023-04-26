#include <stdio.h>
#include <stdlib.h>

// 6. Elabore um programa que leia um valor float e imprima sua terça parte.
int main(){

  float valor, tercaParte;

  printf("\n Digite o valor que deseja imprimir: ");
  scanf("%f", &valor);

  tercaParte = valor * 1/3;
  printf("\n A terceira parte de %f e: %f", valor, tercaParte);

  return 0;
}