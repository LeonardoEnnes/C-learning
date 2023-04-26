#include <stdio.h>
/* 10. Elabore um algoritmo para ler três números. Se o primeiro número for positivo, imprimir ele
multiplicado por 10, caso contrário, imprimir o seu quadrado. Se o segundo número for
negativo, imprimir a mensagem: “Número NEGATIVO!”, caso contrário o algoritmo não deve
imprimir nenhuma mensagem. Se o terceiro número for menor que o segundo, calcular e
imprimir a diferença entre eles, caso contrário, imprimir o terceiro número adicionado de 1.*/

int main(){
  int n1, n2, n3;

  printf("\n Digite o valor do n1: ");
  scanf("%d", &n1);

  printf("\n Digite o valor do n2: ");
  scanf("%d", &n2);

  printf("\n Digite o valor do n3: ");
  scanf("%d", &n3);

  switch (n1 > 0){
    case 1:
      printf("\n O primeiro numero multiplicado por 10 e %d \n ", n1 * 10);
    break;
    case 0:
      printf("\n O quadrado do primeiro numero e %d \n", (n1 * n1));
    break;
  }

  switch (n2 < 0){
    case 1: 
      printf("\n Numero NEGATIVO \n ");
    break;
  }
  
  switch (n3 < n2){
    case 1:
      printf("\n a diferenca entre o terceiro e segundo numero e %d \n", n3 - n2);
    break;
    case 0:
      printf("\n O terceiro número adicionado de 1 é: %d \n", n3 + 1);
    break;
  }

  return 0;
}