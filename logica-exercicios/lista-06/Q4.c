#include <stdio.h>
//Questão 4
int main(){

  char *numeros[] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove",
                     "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove",
                     "vinte", "vinte e um", "vinte e dois", "vinte e tres", "vinte e quatro", "vinte e cinco",
                     "vinte e seis", "vinte e sete", "vinte e oito", "vinte e nove",
                     "trinta", "trinta e um", "trinta e dois", "trinta e tres", "trinta e quatro", "trinta e cinco",
                     "trinta e seis", "trinta e sete", "trinta e oito", "trinta e nove",
                     "quarenta", "quarenta e um", "quarenta e dois", "quarenta e tres", "quarenta e quatro", "quarenta e cinco",
                     "quarenta e seis", "quarenta e sete", "quarenta e oito", "quarenta e nove",
                     "cinquenta", "cinquenta e um", "cinquenta e dois", "cinquenta e tres", "cinquenta e quatro", "cinquenta e cinco",
                     "cinquenta e seis", "cinquenta e sete", "cinquenta e oito", "cinquenta e nove",
                     "sessenta", "sessenta e um", "sessenta e dois", "sessenta e três", "sessenta e quatro", "sessenta e cinco",
                     "sessenta e seis", "sessenta e sete", "sessenta e oito", "sessenta e nove",
                     "setenta", "setenta e um", "setenta e dois", "setenta e tres", "setenta e quatro", "setenta e cinco",
                     "setenta e seis", "setenta e sete", "setenta e oito", "setenta e nove",
                     "oitenta", "oitenta e um", "oitenta e dois", "oitenta e tres", "oitenta e quatro", "oitenta e cinco"};

  int numero;
  printf("Digite um numero de 0 a 85: ");
  scanf("%d", &numero);

  if(numero < 1 || numero > 85) {
    printf("OPCAO INVALIDA. REPETINDO OPCOES \n");
  } else {
    printf("%s\n", numeros[numero]);
  }

  return 0;
}