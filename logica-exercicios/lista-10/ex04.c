#include <stdio.h>

int main(){
  int numeros[5];
  int i;
  int contadorPar = 0;

  printf("Contador de pares: \n");
  for(i = 0; i < 5; i++){
    printf("Digite o %d numero:  ", i + 1);
    scanf("%d", &numeros[i]);

    if (numeros[i] % 2 == 0){
      contadorPar++;
    }
  }

  printf("%d valores pares", contadorPar);
  


  return 0;
}