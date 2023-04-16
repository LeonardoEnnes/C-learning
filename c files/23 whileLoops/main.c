#include <stdio.h>
#include <string.h>


int main(){

// Os loops podem executar um bloco de código desde que uma condição especificada seja atingida.

// Os loops são úteis porque economizam tempo, reduzem erros e tornam o código mais legível.

// while loop = repeats a section of code possibly unlimited times.
// while some condition remains true
// a while loop might not execute at all

  char name[25];

  printf("\n qual seu nome: ");
  fgets(name, 25, stdin);                 // a variavel \ limite de caracteres \ stdin por padrão
  name[strlen(name) - 1] = '\0';


  while(strlen(name) == 0){
    printf("\n voce nao digitou seu nome.");
    printf("\n qual seu nome: ");
    fgets(name, 25, stdin);     
    name[strlen(name) - 1] = '\0';
  }
  // enquando a condição for verdade ele vai permanecer no loop para sempre
  
  printf("\n ola %s", name);
  return 0;
}
