#include <stdio.h>

//4. Elabore um programa que leia um número inteiro e imprima seu antecessor e sucessor.


int main(){
  int n1;
  int n2;

  printf("\n Digite o numero sucessor: ");
  scanf("%d", &n1);

  printf("\n Digite o numero antecessor: ");
  scanf("%d", &n2);

  n1++;
  n2--;

  printf("o numero sucessor e: %d e o numero antecessor e: %d", n1, n2);
  return 0;
}