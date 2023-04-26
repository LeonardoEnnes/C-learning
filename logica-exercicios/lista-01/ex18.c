#include <stdio.h>

int main(){
  float PI = 3.14;
  float raio, area;

  printf("\n Digite o raio: ");
  scanf("%f", &raio);

  area = PI * raio * raio;
  printf("\n A area do circulo e : %f", area);
  return 0;
}