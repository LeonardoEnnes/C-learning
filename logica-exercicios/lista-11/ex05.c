#include <stdio.h>

int main(){
  int n;
  int i;
  int x;

  printf("Digite o numero de testes: ");
  scanf("%d", &n);

  for ( i = 0; i < n; i++)
  {
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &x);

    if (x == 0){
      printf("Nulo");
    }else if( x % 2 == 0){
      if (x > 0){
        printf("Par Positivo\n");
      }else{
        printf("Par Negativo\n");
      }
    }else{
       if (x > 0){
        printf("Impar Positivo\n");
      }else{
        printf("Impar Negativo\n");
      }
    }
    
  }
  





  return 0;
}