#include <stdio.h>
#include <string.h> // 1

int main(){
  char cars[][10] = {"Ford", "Fiat", "Mustang"};

 // cars[0] = "Corvette" you can´t do it instead do this:
  strcpy(cars[0], "Tesla"); // 2

  for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
    printf("%s\n", cars[i]);
  }
  return 0;
}