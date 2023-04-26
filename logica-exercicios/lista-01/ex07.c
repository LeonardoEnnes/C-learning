#include <stdio.h>
#include <stdlib.h>


//7. Elabore um programa que o usuário possa informar o valor do saldo de uma aplicação e imprimir o novo saldo, considerando um reajuste de 8%.
int main(){
  float Saldo, reajuste, novoSaldo;
  printf("\n Digite o valor do saldo: ");
  scanf("%f", &Saldo);

  reajuste = Saldo * 0.08;
  novoSaldo = Saldo + reajuste;
  printf("\n Seu novo saldo com reajuste de 8%% e: %f", novoSaldo);

  return 0;
}