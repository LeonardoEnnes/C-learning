#include <stdio.h>
/*

Elabore um programa que solicite 10 valores inteiros e armazene-os em um vetor. Para
cada valor solicitado deverá ser realizada uma validação para que sejam aceitos apenas
valores positivos. Após o preenchimento deste vetor, deverá ser apresentado o fatorial de
cada um dos valores contidos no vetor. 

*/
int main(){
  int valores[10];
  int i;

  printf("Digite 10 valores inteiros positivos: \n")  ;
  for ( i = 0; i < 10; i++){
    do{   
      printf("Digite o %d numero: ", i + 1);
      scanf("%d", &valores[i]);
    } while (valores[i] <= 0);
  }
  
    printf("\nFatoriais:\n");
  for ( i = 0; i < 10; i++){
    int fatorial = 1;
    for ( int j = 1; j <= valores[i]; j++){
      fatorial = fatorial * j;
    }
    printf("Fatorial de %d: %d\n", valores[i], fatorial);
  }
  



  return 0;
}