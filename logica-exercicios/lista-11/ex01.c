#include <stdio.h>

int main(){
  int x;

  printf("Digite o numero: ");
  scanf("%d", &x);

  int contador = 0;   //inicializar as variaveis depois
  int atual = x;

  while (contador < 6)
  {
    if (atual % 2 != 0)
    {
      printf("%d\n", atual);
      contador++;
    }
    atual++;
  }
  
  return 0;
}