#include <stdio.h>

int main(){
  int R, G, B;

  printf("DIGITE O VALOR DE R (0 OU 1)");
  scanf("%d", &R);
  printf("DIGITE O VALOR DE G (0 OU 1)");
  scanf("%d", &G);  
  printf("DIGITE O VALOR DE B (0 OU 1)");
  scanf("%d", &B);

  if( R !=  0 && R != 1 || G !=  0 && G != 1 ||  B !=  0 && B != 1){
    printf("ENTRADAS INVALIDAS!");
    return 0;
  }

  if( R == 0 & G == 0 & B == 0){
    printf("\n Preto");
  }else if(R == 1 & G == 0 & B == 0){
    printf("\n Vermelho");
  }else if(R == 0 & G == 1 & B == 0){
    printf("\n Verde");
  }else if(R == 0 & G == 0 & B == 1){
    printf("\n Azul");
  }else if(R == 1 & G == 1 & B == 0){
    printf("\n Amarelo");
  }else if(R == 1 & G == 0 & B == 1){
    printf("\n Rosa");
  }else if(R == 0 & G == 1 & B == 1){
    printf("\n Ciano");
  }else if(R == 1 & G == 1 & B == 1){
    printf("\n Branco");
  }

  return 0;
}