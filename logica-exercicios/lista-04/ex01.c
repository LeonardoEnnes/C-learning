#include <stdio.h>
/*1. Construa um algoritmo onde o usuário informará 3 números inteiros e o algoritmo imprimirá na tela
qual o menor deles. Caso o menor número seja maior que 100, imprimir a seguinte mensagem: “O
menor número é maior do que 100”. 
*/
int main(){

  int n1, n2, n3, menor;

  printf("\nDIGITE OS TRES NUMEROS: \n");
  scanf("%d %d %d", &n1, &n2, &n3);

  if(n1 < n2 && n1 < n3){
    menor = n1;
  }else if(n2 < n3){
    menor = n2;
  }else{
    menor = n3;
  }

  if (menor > 100){
    printf("\n O menor numero e maior do que 100");
  }else{
    printf("\n O menor numero e %d", menor);
  }
  

  return 0;
}