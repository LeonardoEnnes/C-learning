/*
Elabore um programa para preencher (com valores informados pelo usuário) um vetor D de 10
elementos inteiros. Após o término da leitura do vetor D, o programa deve copiar todos os seus
elementos para um vetor F mantendo a mesma ordem. Após o término da cópia, escrever os
valores contidos no vetor F. 
*/

#include <stdio.h>

int main(){
  int D[10];
  int i;

  for (i = 0; i < 10; i++){
    printf("Digite os valores: ");
    scanf("%d", &D[i]);
  }

  for ( i = 0; i < 10; i++){
      printf("Valor: %d\n", D[i]);
  }
  


  return 0;
}