#include <stdio.h>
/*6. Elabore um algoritmo que lê o ano de nascimento de uma pessoa e o ano atual (por exemplo:
ano de nascimento da pessoa 1982 e ano atual 2021). O algoritmo deve escrever a idade
da pessoa. Não esqueça de verificar se o ano de nascimento é um ano válido. Por exemplo,
se for informado para o ano de nascimento o valor 2025, o algoritmo deve responder que
que não consegue calcular a idade, pois não é possível nascer em um ano que ainda não
aconteceu.*/

int main(){
  int anoAtual, anoNascimento, idade;

  printf("\n Digite o ano de nascimento: ");
  scanf("%d", &anoNascimento);

  printf("\n Digite o ano atual: ");
  scanf("%d", &anoAtual);

  if (anoNascimento >= 2024){
    printf("\n ERRO 01 !! Nao foi possivel calcular a idade pois voce nao nasceu ainda.");
  }else{
    idade = anoAtual - anoNascimento;
    printf("\n A sua idade e %d \n", idade);
  }
  return 0;
}