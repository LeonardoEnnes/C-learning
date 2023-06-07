#include <stdio.h>

int main(){
  float numeros[6];
  int i;
  int contadorPositivo = 0;
  float mediaPositivos;
  float somaPos = 0.0;  

  printf("Digite seis numeros:\n ");
  for (i = 0; i < 6; i++){
      printf("Digite o numero %d: ", i + 1); 
      scanf("%f", &numeros[i]);

      if (numeros[i] > 0){
        contadorPositivo++;
        somaPos = somaPos + numeros[i];
      }
  }

  printf("A quantidade de numeros positivos e: %d\n", contadorPositivo);

  if (contadorPositivo > 0){
    mediaPositivos = somaPos / contadorPositivo;
    printf("a media de numeros positivos e: %.1f\n", mediaPositivos);
  }
  
  return 0;
}