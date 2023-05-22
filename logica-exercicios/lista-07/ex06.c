#include <stdio.h>
/*6. Elabore um programa no qual o usuário informa 10 números e, 
para cada número informado, o
programa responde se o número é par ou ímpar. */
int main(){
  
  int i;
  int numero[10];

  printf("Digite os 10 numeros: \n");

  //solicitando os 10 numeros ao usuarios
  for ( i = 0; i < 10; i++)
  {
    printf("Digite o numero %d:", i + 1);
    scanf("%d", &numero[i]);
  }
  
  // verificando se o numero e par ou impar
  for ( i = 0; i < 10; i++)
  {
    if (numero[i]%2 == 0)
    {
      printf("O numero %d e par\n", numero[i]);
    }else{
      printf("O numero %d e impar\n", numero[i]);
    }
    
  }
  
  return 0;
}