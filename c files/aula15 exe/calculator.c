#include <stdio.h>

int main(){
  char operador;
  double num1;
  double num2;
  double resultado;

  printf("\n Digite um operador (+ - * /) : \n ");
  scanf("%c", &operador);

  printf("\n Digite o primeiro numero: \n ");
  scanf("%lf", &num1);
  
  printf("\n Digite o segundo numero \n ");
  scanf("%lf", &num2);

  switch (operador){
  case '+':
    resultado = (num1 + num2);
    printf("\n Resultado: %.2lf \n", resultado);
    break;
  case '-':
    resultado = (num1 - num2);
    printf("\n Resultado: %.2lf \n", resultado);
    break;
  case '*':
    resultado = (num1 * num2);
    printf("\n Resultado: %.2lf \n", resultado);
    break;
  case '/':
    resultado = (num1 / num2);
    printf("\n Resultado: %.2lf \n", resultado);
    break;
  default:
    printf("\n %c nao e um operador valido.", operador);
  }
  
  return 0;
}