#include <stdio.h>

int main(){
  int numeros[6];
  int i;
  int numPositivos = 0;
  int numNegativos = 0;


  printf("Digite seis numeros:\n ");
  for (i = 0; i < 6; i++){
      printf("Digite o numero %d: ", i + 1); // i + 1 serve pra mostrar apenas
      scanf("%d", &numeros[i]);

      if (numeros[i] == 0){
        break;
      }else{
        if (numeros[i] > 0){
          numPositivos++;
        }

        if (numeros[i] < 0){
          numNegativos++;
        }
      }
  }
  

  printf("A quantidade de numero Positivos e: %d\n", numPositivos);
  printf("A quantidade de numeros Negativos e: %d\n", numNegativos);



  return 0;
}