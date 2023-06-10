#include <stdio.h>
/*Leia um inteiro N. Este N será o número de números inteiros X que serão lidos.

Imprima quantos desses números X estão no intervalo [10,20] e quantos valores estão fora desse intervalo.
 

Entrada
A primeira linha de entrada é um inteiro N (N < 10000), que indica o número total de casos de teste.
Cada caso é um número inteiro X (-107 < X < 107).*/
int main(){
  
  int n;
  int x;
  int i;
  int fora = 0;
  int dentro = 0;

  printf("Digite a quantidade de testes a ser realizadas: ");
  scanf("%d", &n);

  for ( i = 1; i <= n; i++){
    printf("Digite o numero: ");
    scanf("%d", &x);

    if (x >= 10 && x <= 20){
      dentro++;
    }else{
      fora++;
    }
    
  }
  

  printf("Numeros fora: %d\n", fora);
  printf("Numeros dentro: %d\n", dentro);













  return 0;
}