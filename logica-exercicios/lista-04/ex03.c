#include <stdio.h>
/*
Faça um programa que recebe três valores e verifica se estes podem corresponder aos lados de um
triângulo retângulo. A saída do programa deve ser sempre uma mensagem: É UM TRIÂNGULO
RETÂNGULO ou NÃO É UM TRIÂNGULO RETÂNGULO. DICA: lembrem do teorema de Pitágoras
para resolver essa questão, ou seja, a soma do quadrado dos catetos é igual ao quadrado da
hipotenusa.*/
int main(){
  float a, b, c;

  printf("\n Digite o valor do primeiro lado \n");
  scanf("%f", &a);
  printf("\n Digite o valor do segundo lado \n");
  scanf("%f", &b);
  printf("\n Digite o valor do terceiro lado \n");
  scanf("%f", &c);
  

  if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
    printf("\n E UM TRIANGULO RETANGULO");
  }else{
    printf("\n NAO E UM TRIANGULO RETANGULO");
  }
  

  return 0;
}