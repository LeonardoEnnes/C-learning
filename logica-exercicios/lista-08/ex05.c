#include <stdio.h>
/*Elaborar uma calculadora com as seguintes operações: soma, subtração, multiplicação e divisão. A
calculadora deverá ter um menu informando as opções de operação e após apresentar o resultado
ao usuário, deverá solicitar se o usuário deseja fazer novo cálculo ou se deseja encerrar o
programa.*/

int main(){

float n1, n2;
int soma, subtracao;
float multiplicacao, divisao;
char continuar;
char operador;

printf("BEM VINDO A CALCULADORA\n");

do{
  printf("DESEJA CONTINUAR? (s/n)");
  scanf(" %c", &continuar);

  if(continuar == 's'){
    printf("DIGITE A OPERACAO QUE DESEJA REALIZAR (+, -, *, /)");
    scanf(" %c", &operador);

    printf("DIGITE DOIS NUMEROS:");
    scanf("%f %f", &n1, &n2);

    switch (operador){
    case '+':
      soma = n1 + n2;
      printf("SOMA: %d\n", soma);
      break;
    case '-':
      subtracao = n1- n2;
      printf("SUBTRACAO: %d\n", subtracao);
      break;

    case '*':
      multiplicacao = n1 * n2;
      printf("MULTIPLICACAO: %.2f\n", multiplicacao);
      break;

    case '/':
      divisao = n1 / n2;
      printf("DIVISAO: %.2f\n", divisao);
      break;

    default:
      printf("OPERACAO INAVLIDA\n");
      break;
    }
  }
} while (continuar == 's');

printf("PROGRAMA ENCERRADO");
  
  return 0;
}