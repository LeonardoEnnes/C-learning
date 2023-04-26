#include <stdio.h>
/*5. Elabore um algoritmo em que o usuário irá informar um número e o algoritmo deve imprimir
uma das seguintes mensagens: número maior que 20, igual a 20 ou menor que 20.*/

int main(){
  int num;
  printf("\n Dgite o numero: ");
  scanf("%d", &num);
  if (num > 20){
    printf("\n O numero maior que 20 ");
  }else if(num == 20){
    printf("\n O numero igual a 20 ");
  }else{
    printf("\n O numero menor que 20");
  }
  
  return 0;
}