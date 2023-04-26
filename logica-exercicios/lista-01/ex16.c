#include <stdio.h>


/*16. Elabore um programa para ler o número de eleitores de um município e o número de votos brancos,
nulos e válidos. O programa deverá calcular e escrever o percentual que cada um representa em
relação ao total de eleitores*/


int main(){
  int eleitores, votoBranco, votoNulo, votoValido;
  float percNulo, percvalido, percBranco;

  printf("\n Digite o numero de eleitores do seu municipio");
  scanf("%f", &eleitores);

  
  printf("\n Digite o numero de votos brancos");
  scanf("%f", &votoBranco);

  
  printf("\n Digite o numero de votos nulos");
  scanf("%f", &votoNulo);

  
  printf("\n Digite o numero de votos validos");
  scanf("%f", &votoValido);

  percBranco = (float) votoBranco/eleitores * 100;
  percNulo = (float) votoNulo/eleitores * 100;
  percvalido = (float) votoValido/eleitores * 100;

  printf("\n Percentual de votos nulos : %.2f \n", percNulo);
  printf("\n Percentual de votos brancos : %.2f \n", percBranco);
  printf("\n Percentual de votos validos : %.2f \n", percvalido);

  return 0;
}