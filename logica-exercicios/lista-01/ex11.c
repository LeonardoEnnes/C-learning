#include <stdio.h>
/*Elabore um programa que efetua o cálculo do valor de uma prestação em atraso. A fórmula que
deverá ser utilizada é a seguinte: prestacao = valor + (valor * (taxa / 100) * tempo). O usuário deverá
informar tempo, valor e taxa*/

int main(){
  float taxa, valor, prestacao;
  int tempo;

  printf("\n Digite o tempo de atraso:");
  scanf("%d", &tempo);

  printf("\n Digite o valor:");
  scanf("%f", &valor); 
  
  printf("\n Digite a taxa:");
  scanf("%f", &taxa);

  prestacao = valor + (valor * (taxa/100) * tempo);
  printf("O valor da prestacao e: %f", prestacao);
  return 0;
}