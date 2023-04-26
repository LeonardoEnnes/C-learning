#include <stdio.h>

// 8. Elabore um programa em que o usuário informa dois valores float que representam a base e a altura de um retângulo. O programa deverá imprimir o perímetro e a área do retângulo.
int main(){
  float altura, base, area, perimetro;

  printf("\n Digite o valora da Base: ");
  scanf("%f", &base);

  printf("\n Digite o valora da Altura: ");
  scanf("%f", &altura);

  area = base * altura;
  perimetro = 2*(base + altura);
  printf("\n a area e: %f e o perimetro e : %f", area, perimetro);

}