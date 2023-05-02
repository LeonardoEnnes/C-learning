#include <stdio.h>

int main(){

  int i, j, rows, n=1;

  printf("Number of rows: ");
  scanf("%d", &rows);

  for(int i = 1; i <= rows; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("%d ", n);
      n++;
    }
      printf("\n");
  }
  

  return 0;
}