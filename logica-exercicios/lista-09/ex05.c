#include <stdio.h>
/*Elabore um programa para preencher (com valores informados pelo usuário) um vetor X de 10
elementos inteiros. A seguir, o programa deverá copiar todos os valores negativos do vetor X para
um vetor R, sem deixar elementos vazios entre os valores copiados. Após o término da cópia
escrever o vetor R. Veja abaixo um exemplo.
Vetor X preenchido
[0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
10  -4   8   24  -1  90 -3  1  12 -6
Vetor R após a cópia dos valores
[0] [1] [2] [3] [4] [5] [6] [7] [8] [9]
-4 -1 -3 -6 */
int main(){
  int x[10];
  int r[10];
  int i;
  int j = 0;


  printf("Digite os dez valores\n");
  for (i = 0; i < 10; i++){
    printf("valor de x[%d]\n", i + 1);
    scanf("%d", &x[i]);
    if (x[i] < 0){
      r[j] = x[i];
      j++;
    }
    
  }
  
  for (i = 0; i < j; i++){
    printf("r[%d]\n", r[i]);
  }
  


  return 0;
}


