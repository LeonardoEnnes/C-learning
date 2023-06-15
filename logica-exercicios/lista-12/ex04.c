#include <stdio.h>
/*Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e
negativos do vetor X por 1. Em seguida mostre o vetor X. */
int main(){
  int x[10];
  int i;

  // lendo os valores de x
  printf("Digite os valores de X: \n");
  for (i = 0; i < 10; i++){
    printf("Digite o %d valor: ", i + 1);
    scanf("%d", &x[i]);
    // verificando e trocando os valores negativos e nulos por 1
    if (x[i] <= 0){
      x[i] = 1;
    }
  }

  // exibindo o vetor
  for ( i = 0; i < 10; i++){
    printf("X[%d] = %d\n", i, x[i]);
  }
  
  

  return 0;
}