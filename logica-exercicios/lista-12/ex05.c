#include <stdio.h>
/*Leia um valor e faça um programa que coloque o valor lido na primeira posição de um
vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior.
Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim
sucessivamente. Mostre o vetor em seguida*/
int main(){
  int n[10];
  int i;
  int valor;

  // lendo o valor 
  printf("Digite o valor: ");
  scanf("%d", &valor);

  //atribuindo o valor no vetor
  n[0] = valor;
  for (i = 1; i < 10; i++){
    n[i] = 2 * n[i - 1];
  }
  
  //mostrando o vetor
  for (i = 0; i < 10; i++){
    printf("N[%d] = %d\n", i, n[i]);
  }
  

  
  
  return 0;
}