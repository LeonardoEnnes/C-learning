#include <stdio.h>

/*4. Elabore um algoritmo que solicite ao usuário um número. O programa deverá imprimir se o
número é par ou se o número é ímpar. DICA: aqui também precisamos utilizar o operador
de resto da divisão. J*/

int main(){
  int num;

  printf("\n Digite o numero :");
  scanf("%d", &num);

  if(num % 2 == 0){
    printf("\n O numero %d e Par.", num);
  }else{
    printf("\n O numero %d e Impar", num);
  }
  
  return 0;
}