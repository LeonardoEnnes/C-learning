#include <stdio.h>
#include <ctype.h>

/*9. Elabore um algoritmo que lê a altura em metros (h das fórmulas apresentadas abaixo) e o
sexo de uma pessoa (utilize M para masculino e F para feminino e lembrar das variáveis do
tipo char). Por exemplo, a altura pode ter valor 1.78, ou seja, um metro e setenta e oito
centímetros. A partir dessas duas informações, o algoritmo deve calcular e escrever o peso
ideal da pessoa, considerando as seguintes fórmulas:
a. Para homens a fórmula é: peso_ideal = (72.7 * h) - 58
b. Para mulheres a fórmula é: peso_ideal = (62.1 * h) - 44.7*/


int main(){
  float h, pesoIdeal;
  char sexo;

  printf("\n Digite a sua altura em metros : ");
  scanf("%f", &h);

  printf("\n Digite o seu sexo (M ou F): ");
  scanf(" %c", &sexo); // não entendi pq dava erro ao deixar o "%c" junto, apenas dei um espaço: " %c"  e aparentemente resolveu o bug
  sexo = toupper(sexo);

  if (sexo == 'M'){
    pesoIdeal = (72.7 * h) - 58;
      printf("\n o peso ideal para um homem de %.2f de altura e: %.1f kg.", h, pesoIdeal);
  }else if(sexo == 'F'){
    pesoIdeal = (62.1 * h) - 44.7;
      printf("\n o peso ideal para uma mulher de %.2f de altura e: %.1f kg.", h, pesoIdeal);
  }else{
    printf("\n ERRO, Sexo nao encontrado. ");
  }
  
  return 0;
}