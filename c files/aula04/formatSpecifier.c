#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
 // format specifier % = define e formata o tipo de dado a ser mostrado


 // %c = caracter
 // %s = string 
 // %f = float
 // %lf = double
 // %d = integer

 // %.1 = precisão decimal
 // %1 = minimum field width
 // %- = left align



  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("item 1: $%-8.2f \n", item1);
  printf("item 2: $%8.2f \n", item2);
  printf("item 3: $%8.2f \n", item3);


  return 0;
}