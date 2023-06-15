#include <stdio.h>
/*Elabore um programa que solicite 20 valores inteiros ao usuário e armazene-os em um
vetor. Após, o programa deverá imprimir a média dos valores armazenados nos índices
pares do vetor e a soma dos valores armazenados nas posições ímpares do vetor. 
*/
int main(){
  int valor[20];
  int i;
  int somaPar = 0;
  int somaImpar = 0;
  float mediaPar = 0.0;
  int contadorPar = 0;

  printf("Digite 20 valores: \n");

  for ( i = 0; i < 20; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%d", &valor[i]);
      if (valor[i] % 2 == 0){
        somaPar += valor[i];
        contadorPar++;
      }else{
        somaImpar += valor[i];
      }
  }

  if (contadorPar > 0){
   mediaPar = (float) somaPar / contadorPar;
  }
  
  printf("A media dos indices pares e: %.1f\n", mediaPar);
  printf("A soma dos valores impares e: %d\n", somaImpar);



  return 0;
}