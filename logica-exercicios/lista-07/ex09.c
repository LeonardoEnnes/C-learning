#include <stdio.h>
/*9. Elabore um programa que solicita ao usuário um número. 
A partir do número informado, o programa
deverá imprimir todos os números, a partir do número 
informado até o número 1, em ordem decrescente, um em cada linha.*/
int main(){
  int i;
  int numero;

  printf("Digite o Numero: ");
  scanf("%d", &numero);

  //loop externo que vai percorrer ate o numero 1
  for (i = numero; i >= 1; i--){
    // loop interno que percorre o numero da linha
  /**/  for (int j = i; j >= 1; j--){
      printf("%d", j);
    }
    printf("\n");
  }
  
  return 0;
}
  
  
