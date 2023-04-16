#include <stdio.h>

/* operador ternario = shortcut para if else quandoa atribuido/retornando um valor
    (condição ) ? valor se true : valor se falso
*/

int findMax(int x, int y){
  return (x > y) ? x : y;
}

int main(){
  int max = findMax(4, 6);
  printf("%d", max);
  return 0;
}