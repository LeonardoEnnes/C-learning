#include <stdio.h>
/*Elabore um programa em C que leia dois vetores A e B de 5 elementos cada (valores do tipo
inteiro). O programa deverá calcular e escrever em um terceiro vetor chamado SOMA, o qual é
resultado da soma dos elementos dos vetores A e B. Por exemplo, em SOMA[0] deverá ser
armazenada a soma de A[0] e B[0] e, assim, sucessivamente. */

int main(){
  int a[5];
  int b[5];
  int soma[5];
  int i;

  // pedindo para o usuario fornecer os valores do vetor A
  printf("Digite os valores de a[5] \n");
  for (i = 0; i < 5; i++){
    printf("Valor de a[%d]:", i);
    scanf("%d", &a[i]);
  }

  // pedindo para o usuario fornecer os valores do vetor A
  printf("Digite os valores de b[5] \n");
  for (i = 0; i < 5; i++){
    printf("Valor de b[%d]:", i);
    scanf("%d", &b[i]);
  }

  //calculo
  for ( i = 0; i < 5; i++){
    soma[i] = a[i] + b[i];
  }

  // mostrando o vetor
  for ( i = 0; i < 5; i++){

    printf("Soma[%d]: %d\n ", i, soma[i]);
  }
  
  

  return 0;
}