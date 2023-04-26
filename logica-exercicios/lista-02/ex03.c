#include <stdio.h>
/*Elabore um algoritmo que solicite ao usuário um número. O algoritmo deverá informar se o
número informado é divisível por 5. DICA: para saber se um número é divisível por 5
precisamos saber se o resto da divisão do número por 5 é igual a zero. No nosso material,
temos a explicação do comando de resto da divisão.*/

int main(){
  int num;

  printf("\n Dgite o numero : ");
  scanf("%d", &num);

  if (num % 5 == 0){
    printf("\n o numero e divisivel por cinco.");
  }else{
    printf("\n o numero nao e divisivel por cinco.");
  }
  
  return 0;
}