#include <stdio.h>
/*Elabore um programa para preencher (com valores informados pelo usuário) um vetor C de 10
elementos inteiros. Após o término da leitura, trocar todos os valores negativos armazenados no
vetor C por 0 (zero). Após todas as trocas terem sido efetuadas, escrever na tela os valores
armazenados no vetor C. 
*/
int main(){
  int c[10];
  int i;
  int zero = 0;

  printf("Digite 10 elementos inteiros: ");
  for (i = 0; i < 10; i++)
  {
    printf("Digite o Valor: ");
    scanf("%d", &c[i]);
    if (c[i] < 0)
    {
      c[i] = zero;
    }
  }
  

  for ( i = 0; i < 10; i++)
  {
    printf("valor digitado: %d\n", c[i]);
  }
  
  return 0;
}