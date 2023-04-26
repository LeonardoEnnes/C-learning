#include <stdio.h>


/* 13. Elabore um programa para ler o valor salário mensal e o percentual de reajuste do salário de um
trabalhador. O programa deverá calcular e escrever o valor do novo salário. */

int main(){
  float salarioMensal, reajuste, novoSalario;

  printf("\n Digite seu salario: ");
  scanf("%f", &salarioMensal);

  
  printf("\n Digite o reajuste previsto: ");
  scanf("%f", &reajuste);

  novoSalario = salarioMensal * (1 + reajuste / 100);
  printf("\n Seu novo salario e : %.2f \n", novoSalario);
  return 0;
}