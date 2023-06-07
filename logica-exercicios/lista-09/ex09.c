#include <stdio.h>
/*Elaborar um programa em C para ler um vetor de até 10 elementos. A leitura de valores deverá ser
executada até que o vetor fique totalmente preenchido ou até ser informado um valor negativo ou
zero. Após a leitura dos valores, o programa deverá calcular e imprimir a soma dos valores maiores
que 5 existentes no vetor.*/
int main(){
  int c[10];
  int i;
  int soma = 0;

  // solicita ao usuario o valor e verifica se o valor e negativo, caso negativo ele encerra o programa
  for(i = 0; i < 10; i++){
    printf("Digite o valor de c[%d]", i);
    scanf("%d", &c[i]);
    if (c[i] < 0){
      printf("Erro\n");
      break;
    }
  }

  // faz a soma dos valores maiores que 5 dentro do vetor
  for ( i = 0; i < 10; i++){
    if (c[i] > 5){
      soma += c[i]; // += e um operador de atribuição com soma (lembrar)
    }
    
  }
  
  // imprimindo a soma dos valores maiores que 5
  printf("a soma dos valores e %d", soma);





  return 0;
}