#include <stdio.h>
/*Escreva um programa para repetir a leitura de uma senha até que ela seja válida. Para cada leitura
da senha incorreta informada escrever a mensagem "SENHA INVÁLIDA". Quando a senha for
informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo
encerrado. Considere que a senha correta é o valor “2008”.
*/
int main(){
int senha;

do{
  printf("DIGITE A SENHA: ");
  scanf("%d", &senha);

  if (senha != 2008){
    printf("SENHA INVALIDA\n");
  }else{
    printf("ACESSO PERMITIDO\n");
  }
  
} while (senha != 2008);


  return 0;
}