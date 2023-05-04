
#include <stdio.h>
/*1. Escreva um algoritmo para ler o nome de dois times e o número de gols marcados
 por cada um dos times. O algoritmo deverá mostrar quem é o vencedor. 
 Caso não haja vencedor deverá ser impresso a palavra EMPATE. 
*/

int main(){
  char time1[10];
  char time2[10];
  int golTime1, golTime2;

  printf("Digite o nome do time 1:\n");
  scanf("%s", &time1);
  printf("Digite o numero de gols marcados pelo %s\n", time1);
  scanf("%d", &golTime1);
  printf("Digite o nome do time 2:\n");
  scanf("%s", &time2);
  printf("Digite o numero de gols marcados pelo %s\n", time2);
  scanf("%d", &golTime2);

  if(golTime1 > golTime2){
    printf("O time vencedor e %s que marcou %d gols", time1, golTime1);
  }else if(golTime2 > golTime1){
    printf("O time vencedor e %s que marcou %d gols", time2, golTime2);
  }else{
    printf("EMPATE");
  }

  return 0;
}