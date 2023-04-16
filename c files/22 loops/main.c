#include <stdio.h>

int main(){
  // for loops = repete a section de codigos para um determinado numero de vezes
  // Quando você souber exatamente quantas vezes deseja percorrer um bloco de código, use o forloop em vez de um whileloop:


  for(int i = 1; i <= 10; i++){
    printf("Teste %d \n", i);
  }
  

 for(int i = 1; i <= 10; i+=3){
    printf("name %d \n", i);
  }

 for(int i = 10; i >= 1; i--){
    printf(" %d \n", i);
  }

  return 0;
}