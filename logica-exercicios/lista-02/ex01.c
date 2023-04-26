#include <stdio.h>


/* 1. Elabore um algoritmo para ler dois números e apresentar a diferença do maior número pelo
menor número.*/

int main()
{
  int num1, num2;
  printf("\n digite o numero 1: ");
  scanf("%d", &num1);
  printf("\n digite o numero 2: ");
  scanf("%d", &num2);

  if (num1 >= num2){
    printf("\n o numero %d e maior ou igual a %d \n", num1, num2);
  }else{
    printf("\n o numero %d nao e maior que %d \n", num2, num1);
  }
  
  return 0;
}
