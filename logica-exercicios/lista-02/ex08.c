#include <stdio.h>
/*Elabore um algoritmo que solicita ao usuário um número inteiro que representa uma senha.
O algoritmo deve verificar a validade dessa senha fornecida pelo usuário, considerando que
a senha válida é o número 1234. Deve ser impresso as seguintes mensagens: ACESSO
PERMITIDO caso a senha seja válida; ACESSO NEGADO caso a senha seja inválida.*/

int main(){
  int senha;

  printf("\n Digite a senha de acesso");
  scanf("%d", &senha);

  if(senha == 1234){
    printf("\n ACESSO PERMITIDO");
  }else{
    printf("\n ACESSO NEGADO");
  }

  return 0;
}