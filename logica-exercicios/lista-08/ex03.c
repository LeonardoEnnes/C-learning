#include <stdio.h>
/*

3. Elaborar um programa que deverá ler um número indeterminado de idades de pessoas e informar
quantos são maiores de idade e quantos são menores de idade. O programa deverá ser encerrado
quando a idade informada for negativa.


*/

int main(){
  int numero;
  int contMenor;
  int contMaior;

  do
  {
    printf("Digite a idade: (DIGITE UM NUMERO NEGATIVO PARA SAIR)");
    scanf("%d", &numero);

    if (numero >= 18){
     contMaior++;
    }else if(numero < 18){
      contMenor++;
    }
    
  } while (numero > 0);

  printf("O numero de pessoas que sao menores de idade e: %d\n", contMenor);
  printf("O numero de pessoas que sao maiores de idade e: %d\n", contMaior);

  
  return 0;
}