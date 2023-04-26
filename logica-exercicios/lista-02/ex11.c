#include <stdio.h>

/*11. Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de
10% para carros fabricados antes de 1990 e uma taxa de 15% para os carros fabricados
depois de 1990. A taxa incide sobre o valor de tabela do carro. 

Elabore um algoritmo que
solicite ao usuário o ano de fabricação e o preço de tabela do carro. A seguir o algoritmo
deverá calcular e imprimir o imposto a ser pago para a transferência do veículo,
considerando as regras apresentadas.*/


int main(){
  int ano;
  float preco, taxa;

  printf("\n Digite o ano do carro \n ");
  scanf("%d", &ano);

  printf("\n Digite o preco de tabela: \n");
  scanf("%f", &preco);

  if(ano <= 1990){
    taxa = preco * 0.1;
  }else if(ano >= 1995){
    taxa = preco * 0.15;
  }

  printf("\n O imposto a ser pago para a transferencia de veiculo e: R$ %.5f \n", taxa);
  return 0;
}