#include <stdio.h>

int main(){
   //nested loop = a loop inside of another loop
   // e bem situacional não há muitos exemplos 

  int rows;
  int columns;
  char symbol;

  printf("\n Digite o numero de linhas: ");
  scanf("%d", &rows);

  printf("\n Digite o numero de colunas : ");
  scanf("%d", &columns);

  scanf("%*c"); // just to reset the buffer if the scanf("%c"); "%*c" use this


  printf("\n Digite o simbolo para usar: ");
  scanf("%c", &symbol);

  for(int i = 1; i <= rows; i++)
  {
    for(int j = 1; j <= columns; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }
  return 0;
}