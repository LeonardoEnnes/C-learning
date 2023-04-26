#include <stdio.h>


/*14. Elabore um programa para ler uma temperatura em graus Fahrenheit (F), calcular e escrever o valor
correspondente em graus Celsius (C).

15. Elabore um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit.


  fiz os dois no msm codigo
*/

int main(){
  float Fahrenheit, celsius;

  // convertendo Fahrenheit para celsius
  printf("\n Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &Fahrenheit);
  celsius = (Fahrenheit - 32) * 5/9;
  printf("\n A conversão do valor Fahrenheit %f para o valor celsius e: %f ", Fahrenheit, celsius);

  // convertendo celsius para Fahrenheit
  printf("\n Digite a temperatura dem graus celsius");
  scanf("%f", &celsius);
  Fahrenheit = celsius * 9/5 + 32;
  printf("\n A conversão do valor Celsius %f para o valor em Fahrenheit e: %f ", celsius, Fahrenheit);

  return 0;
}