#include <stdio.h>
/*
O usuário deve informar o ano de nascimento de uma pessoa e o ano atual. O algoritmo deve
responder ao usuário a idade da pessoa. Não esqueça de verificar se o ano de nascimento é um ano
válido e para isso, considere que ninguém pode ter idade negativa e que a pessoa com maior
longevidade comprovada documentalmente foi Jeanne Calment com 122 anos e 164 dias e, portanto,
considere que o sistema deve aceitar idades de até 125 anos. Ou seja, um ano de nascimento é
válido de forma a garantir que a pessoa tenha entre 0 e 125 anos. 
*/
int main(){
  int anoNasc;
  int anoAtual;
  int idade;

  printf("\n DIGITE O ANO DE NASCIMENTO \n");
  scanf("%d", &anoNasc);

  printf("\n DIGITE O ANO ATUAL \n");
  scanf("%d", &anoAtual);

  idade = anoAtual - anoNasc;

  if(idade >= 0 && idade <= 100){
    printf("\n A pessoa tem %d anos de idade", idade);
  }else{
    printf("\n A idade informada nao e valida", idade);

  }
  return 0;
}