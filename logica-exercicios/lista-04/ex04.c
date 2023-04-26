#include <stdio.h>
/*4. Elabore um algoritmo que recebe três valores, que representam os lados de um triângulo e verifica
se esse triângulo é equilátero, isósceles ou escaleno. Lembrando:
Equilátero: possui três lados iguais
Isósceles: possui dois lados iguais
Escaleno: possui todos os lados diferentes*/
int main(){
  float a,b,c;

  printf("\n Digite o primeiro lado: ");
  scanf("%f", &a);

  printf("\n Digite o segundo lado: ");
  scanf("%f", &b); 
  
  printf("\n Digite o terceiro lado: ");
  scanf("%f", &c);

  if(a == b && b == c){
    printf("\n O triangulo e Equilatero");
  }else if(a == b || b == c || a == c){
    printf("\n O triangulo e Isosceles");
  }else{
    printf("\n O triangulo e escaleno");
  }

  return 0;
}