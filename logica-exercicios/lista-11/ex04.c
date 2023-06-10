#include <stdio.h>
#include <math.h>

int main(){
  int n;
  int i;
  int numeroQuadrado;

  printf("Digite o numero: ");
  scanf("%d", &n);

  for ( i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      numeroQuadrado = pow(i, 2);
      printf("O quadrado de %d e %d\n", i, numeroQuadrado);
    }
    
  }
  
  return 0;
}