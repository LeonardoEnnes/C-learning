#include <stdio.h>

/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% pela taxa de
serviço. Escreva um programa que leia o valor gasto pelo cliente e imprima o valor total da conta
adicionando o percentual da taxa de serviço.*/

int main(){
  float valorGasto, taxaServico, valorTotal;

  printf("\n Digite o valor gasto pelo cliente: ");
  scanf("%f", &valorGasto);

  taxaServico = 0.1 * valorGasto;
  valorTotal = valorGasto + taxaServico;

  printf("\n O valor gasto pelo cliente foi:  %.2f \n", valorGasto);
  printf("\n O valor da taxa de servico foi:  %.2f \n", taxaServico);
  printf("\n O valor total da conta foi:  %.2f \n", valorTotal);


  return 0;
}