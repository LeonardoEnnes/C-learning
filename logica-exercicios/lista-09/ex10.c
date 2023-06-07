#include <stdio.h>
/*Faça um programa para ler valores inteiros e armazenar em um vetor R de 5 elementos, o qual
representa o gabarito da MEGA SENA. A seguir ler 10 valores inteiros e armazenar em um vetor A,
o qual representa os números que um jogador apostou. O programa deverá imprimir quantos pontos
fez o apostador*/
int main(){
  int r[5];
  int a[10];
  int i;
  int j;
  int pontos = 0;


  //lendo o gabarito
  printf("Jogo da Mega Sena:\n");
  printf("Digite os 5 numeros do gabarito do jogo: \n");
  for (i = 0; i < 5; i++){
    printf("Numero %d: ", i);
    scanf("%d", &r[i]);
  }

  //lendo as apostas
  printf("Digite os numeros de sua aposta\n");
  for (i = 0; i < 10; i++){
    printf("Numero %d: ", i);
    scanf("%d", &a[i]);
  }
  
  //verificando os pontos
  for (i = 0; i < 10; i++){
    for (j = 0; j < 5; j++){
      if (a[i] == r[j]){
        pontos++;
      }
    }
  }
  
  // Imprimindo a pontuação
   printf("\nVoce fez %d ponto(s).\n", pontos);
  return 0;
  
  
}









