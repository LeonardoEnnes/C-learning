#include <stdio.h>
/*
Elabore um programa que preencha um vetor A de 10 elementos com os números inteiros
10,20,30,40,50,...,100. Após o seu total preenchimento, escrever na tela os valores armazenados no
vetor A*/
int main(){
  int i;
  int A[10];

  for (i = 0; i < 10; i++){
    A[i] = (i + 1) * 10;
  }
  
  for (i = 0; i < 10; i++){
    printf("Valor: %d\n", A[i]);
  }
  

 
  
  return 0;
}