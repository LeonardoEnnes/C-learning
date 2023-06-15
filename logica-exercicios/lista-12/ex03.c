#include <stdio.h>
/*
Faça um programa para ler 9 valores e armazenar em um vetor B de 10 posições. Após,
faça a leitura de um valor X. O programa deverá incluir o valor X na primeira posição do
vetor B fazendo com que os elementos existentes dentro do vetor sejam deslocados de
uma posição para o final. Logo após, imprima o vetor B na tela. 
*/
int main(){
  int b[10];
  int i;
  int x;

  // lendo os valores de b
  printf("Digite os 9 valores que deseja armazenar: \n");
  for ( i = 0; i < 9; i++){
    printf("Digite o %d numero", i + 1);
    scanf("%d", &b[i]);
  }

  // lendo o valor de x
  printf("Digite o valor de X"); 
  scanf("%d", &x);

  // mudando de posição
  for ( i = 9; i > 0; i--){
    b[i] = b[i - 1];
  }
  
  //setando o valor para a primeira posição
  b[0] = x;
  
  // imprimindo os valores
  printf("Os valores: \n");
  for ( i = 0; i < 10; i++){
    printf("%d\n", b[i]);
  }
  


  return 0;
}