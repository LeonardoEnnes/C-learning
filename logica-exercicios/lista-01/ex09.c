#include <stdio.h>
 // Elabore um programa que solicita dois valores float ao usuário que representam, respectivamente, a base e altura de um triângulo. O programa deverá calcular e imprimir a área do triângulo
int main(){
  float base, altura, area;

  printf("\n Digitie o valor da base: ");
  scanf("%f", &base);

  printf("\n Digitie o valor da altura: ");
  scanf("%f", &altura);

  area = (base * altura)/2;
  printf("\n A area do triangulo e: %f", area);
  return 0;
}