#include <stdio.h>
/*
3. Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "São Múltiplos" ou
"Não são Múltiplos", indicando se os valores lidos 
são múltiplos entre si. Para serem múltiplos entresi, o valor A deve ser 
divisível pelo valor B ou o valor B deve ser divisível pelo valor A. 
*/

int main(){
  int a;
  int b;

  printf("\n Digite o valor de A: ");
  scanf("%f", &a);
  printf("\n Digite o valor de B: ");
  scanf("%f", &b);

  if(a % b == 0 || b % a == 0){
    printf("\n Sao Multiplos");
  }else{
    printf("\n Nao sao Multiplos");
  }

  return 0;
}