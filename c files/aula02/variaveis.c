#include <stdio.h>
#include <stdlib.h>

/*
  int x; declaration
  x = 123 initialization
  int y = 321 declaration + initialization 
*/


int main(){

  int idade = 20; // int armazena numeros inteiros sem decimais (123 ou -123)
  float pontuação = 2.05; // float armazena numeros de ponto flutuante, com decimais, como 19,99 ou -19,99
  char nota = 'A';           //armazena caracteres unicos como 'a' e 'b'. os valores de caracteres são cercados por aspas simples
  char nome[] = "leo"; // array de caracteres

  printf("Olá! %s  \n", nome);
  printf("voce tem %d anos de idade \n", idade);
  printf("voce tem a pontuação de: %f \n", pontuação);
  printf("sua ultima nota foi: %c \n", nota);

  return 0;
}