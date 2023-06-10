#include <stdio.h>

int main(){
  int n;
  int i;

  printf("Digite o numero: ");
  scanf("%d", &n);


  for ( i = 1; i <= 1000; i++){
    if (i % n == 2){
      printf("%d\n", i);
    }
    
  }
  

  return 0;
}