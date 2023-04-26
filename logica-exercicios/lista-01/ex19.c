#include <stdio.h>

/*Para vários tributos, a base de cálculo é o salário mínimo. Elabore um programa que leia o valor do
salário mínimo e o valor do salário de uma pessoa. O programa deverá calcular e imprimir quantos
salários mínimos a pessoa ganha.*/

int main(){
  float salarioMinimo, salarioPessoa, quantidadeSalarios;

  printf("\n Digite o valor do salario minimo atual: ");
  scanf("%f", &salarioMinimo);

  printf("\n Digite seu salario: ");
  scanf("%f", &salarioPessoa);

  quantidadeSalarios = salarioPessoa / salarioMinimo;
  printf("\n A quantidade de salarios minimos e: %.1f \n", quantidadeSalarios);
  return 0;
}