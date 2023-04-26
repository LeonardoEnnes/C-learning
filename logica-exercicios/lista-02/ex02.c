#include <stdio.h>

/*2. Elabore um algoritmo que leia dois números. Se os dois números forem iguais, o programa
deverá imprimir a mensagem: “Números iguais!” e encerrar a execução. Caso contrário,
imprimir os dois números informados.*/


int main(){
  int num1, num2;

  printf("\n Digite o numero 1 : ");
  scanf("%d", &num1);

  printf("\n Digite o numero 2 : ");
  scanf("%d", &num2);

  if (num1 == num2){
    printf("\n NUMEROS IGUAIS!!! \n");
  }else{
    printf("\n o numero %d nao e igual ao numero %d", num1, num2);
  }
  
  return 0;
}