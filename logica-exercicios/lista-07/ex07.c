#include <stdio.h>
/*7. 
Elabore um programa em que o usuário informa dois números (n1 e n2). 
O primeiro número (n1) indica o início do laço de repetição e o segundo número (n2) 
o fim do laço de repetição. 
O programa deverá imprimir todos os números que estão no intervalo entre n1 e n2. 
IMPORTANTE: 
caso n1 seja maior que n2, o laço de repetição deverá operar com decremento. */

int main(){
  int i;
  int n1, n2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);

  if (n1 == n2){
    printf("Erro, Numeros iguais!!!");
  }else if (n1 > n2){
    for (i = n1-1; i > n2; i--)  // para o n1 ficar entre n2 foi adicionado -1
    {
      printf("Numero: %d\n", i);
    }
  }else{
    for (i = n1+1; i < n2; i++)  // para o n1 ficar entre n2 foi adicionado +1
    {
      printf("Numero: %d\n", i);
    }
  }
  
  
  
  return 0;
}