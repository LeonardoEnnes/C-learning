#include <stdio.h>
#include <string.h>

int main(){
  char x[15] = "water";
  char y[15] = "soda";
  char temp[15];


  // when using strcpy function, if the lenght of the second argument is less then the first argument can lead to unexpected errors, so we set a lenght of the same size in the array 
  strcpy(temp, x);
  strcpy(x, y);    
  strcpy(y, temp);



  printf("X = %s\n", x);
  printf("Y = %s\n", y);

  return 0;
}