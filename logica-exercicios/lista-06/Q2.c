#include <stdio.h>


int main(){
  int a, b, c;

  printf("Digite os valores de A, B e C: ");
  scanf("%d %d %d", &a, &b, &c);

  if ((a != 0 && a != 1) || (b != 0 && b != 1) || (c != 0 && c != 1)) {
    printf("Erro!");
  }else {
    if(a == 0 && b == 0 && c == 0){
      printf("Resultado: 0 ");
    }else if(a == 0 && b == 0 && c == 1){
      printf("Resultado: 1 ");
    }else if(a == 0 && b == 1 && c == 1){
      printf("Resultado: 2 ");
    }else if(a == 0 && b == 1 && c == 0){
      printf("Resultado: 3 ");
    }else if(a == 1 && b == 1 && c == 0){
      printf("Resultado: 4 ");
    }else if(a == 1 && b == 1 && c == 1){
      printf("Resultado: 5 ");
    }else if(a == 1 && b == 0 && c == 1){
      printf("Resultado: 6 ");
    }else if(a == 1 && b == 0 && c == 0){
      printf("Resultado: 7 ");
    }
  }
  
  return 0;
}