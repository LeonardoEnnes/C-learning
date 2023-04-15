#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <string.h>


int main(){
  char name[25]; // bytes
  int idade;

  printf("\n Qual seu nome???");
  //scanf("%s", name);  não lê espaços brancos ou seja a cada espaço dado ele para de ler
  fgets(name, 25, stdin); // inclui espaços brancos porem vai incluir uma nova linha ao apertar enter
  name[strlen(name)-1] = '\0'; // não vai fazer sentido agora porem no futuro vai, ou seja voltar o codigo para entender...

  printf("\n  Quantos anos voce tem ???", idade);
  scanf("%d", &idade);

  printf("\n Ola %s, como voce esta", name); // acaba pulando uma linha por conta
  printf("\n voce tem %d anos de idade.", idade);
  return 0;
}