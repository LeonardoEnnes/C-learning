#include <stdio.h>

/*
Elabore um programa em C para ler um vetor Q de 10 posições (valores inteiros e aceitar somente
números positivos – fazer essa validação). A seguir deverá ser apresentado em tela o valor do
maior elemento de Q e a respectiva posição (índice) que ele ocupa no veto
*/



int main(){
  int q[10];
  int i;
  int maior;
  int posicao = 0;

  for ( i = 0; i < 10; i++){
    do{
      printf("Digite o valor de q[%d]:", i);
      scanf("%d", &q[i]);
      if (q[i] <= 0){
        printf("O Valor q[%d] e invalido, digite novamente", i);
      }
    } while (q[i] <= 0);
  }
  
  for (i = 0; i < 10; i++){
    if (q[i] > maior){
      maior = q[i];
      posicao = i;
    }
  }

  printf("O maior valor de q[10] e: %d\n", maior);
  printf("A Posicao do maior valor e: %d\n", posicao);

  


  return 0;
}