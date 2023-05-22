#include <stdio.h>
/*Desenvolva um programa no qual o usuário informa 20 números e programa responde
 qual é o menor e qual é o maior dentre os valores informados.
Exemplo de dados de entrada:
61 1 90 12 7 8 10 100 50 - 10 165 5 0
899 126 3 87 34 71 84

Resposta do programa:
Maior: 899
Menor: -10*/

int main(){
  int numeros[20];
  int menor, maior;

  for (int i = 0; i < 20; i++)
  {
    printf("Digite o numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  menor = numeros[0];
  maior = numeros[0];

  for (int i = 0; i < 20; i++)
  {
    if (numeros[i] < menor){
      menor = numeros[i];
    }else if(numeros[i] > maior){
      maior = numeros[i];
    }
  }

  printf("Menor numero: %d\n", menor);
  printf("Maior numero %d\n", maior);
  return 0;
}
  
  
