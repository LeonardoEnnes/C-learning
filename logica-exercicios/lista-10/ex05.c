#include <stdio.h>

int main(){
  int numeros[5];
  int i;
  int contadorImpar = 0;
  int contadorPar = 0;
  int contadorNegativo = 0;
  int contadorPositivo = 0;

  for ( i = 0; i < 5; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &numeros[i]);

    if(numeros[i] % 2 == 0){
      contadorPar++;
    }else{
      contadorImpar++;
    }
    
    if (numeros[i] > 0){
      contadorPositivo++;
    }else{
      contadorNegativo++;
    }
    
  }

  printf("%d numeros pares\n", contadorPar);
  printf("%d numeros impares\n", contadorImpar);
  printf("%d numeros positivos\n", contadorPositivo);
  printf("%d numeros negativos\n", contadorNegativo);





  return 0;
}