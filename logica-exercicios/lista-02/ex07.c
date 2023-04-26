#include <stdio.h>

/*Elabore um algoritmo que solicita ao usuário a idade de uma pessoa. O programa deverá
imprimir na tela se a pessoa é maior ou menor de idade. Lembrando: menor de idade tem
menos de 18 anos e maior de idade tem 18 anos ou mais.*/


int main(){
  int idade;
  printf("\n Digite sua idade");
  scanf("%d", &idade);

  if(idade > 18){
    printf("\n Voce e maior de idade ");
  }else{
    printf("\n voce ainda e menor de idade");
  }

  return 0;
}