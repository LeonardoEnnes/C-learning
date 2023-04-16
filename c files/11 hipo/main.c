#include <stdio.h>
#include <math.h>

int main(){
  
  double A;
  double B;
  double C;

  printf("\n Digite lado A: ");
  scanf("%lf", &A);
  
  printf("\n Digite lado B: ");
  scanf("%lf", &B);


  C = sqrt(A*A + B*B);
  printf("\n Lado C: %lf", C);

  return 0;
}