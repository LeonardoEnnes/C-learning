#include <stdio.h>
/* 
1. Elabore um algoritmo em que o usuário deverá informar a idade de uma pessoa e o programa deverá
responder: MAIOR DE IDADE, MENOR DE IDADE ou MAIOR DE 65 ANOS. 

*/
int main(){
  int idade;

  printf("\n DIGITE SUA IDADE: ");
  scanf("%d", &idade);

  if (idade >= 65)
  {
    printf("MAIOR DE 65 ANOS");
  }else if(idade >= 18){
    printf("MAIOR DE IDADE");
  }else{
    printf("MENOR DE IDADE");
  }
  
  return 0;
}