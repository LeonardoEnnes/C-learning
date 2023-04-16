#include <stdio.h>

// function prototype

/* declaração de função sem corpot antes do main()
  garante que chamada para funções são feitas com os argumentos corretos
  basicamente e uma outra maneira de declarar e definir funções 
*/

// importante
// muitos compiladores de não checam pelo parametros
// argumentos faltando vão gerar comportamentos inesperados
// umna função prototype cause o compilador marcar um erro se argumentos estão faltando


//vantagens de usar 
// 1. facil de navegar pelo prpgrama qnd o main() esta no topo do file
// 2. ajuda em debugar o codigo
// 3. comumente usado em header files


void oi(char[], int); // function prototype

int main(){

  char nome[] = "Leonardo";
  int idade = 20;

 // oi(nome); // vai dar erro ao inves de compilar errado o codigo

  return 0;
}

void oi(char nome[], int idade)
{
  printf("\n Oi %s voce tem %d anos de idade", nome);
  printf("\n Voce tem %d anos de idade", idade);

}