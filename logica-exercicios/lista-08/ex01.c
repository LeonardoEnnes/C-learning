#include <stdio.h>
/*
1. Elabore um programa para repetir a leitura de um número, enquanto o valor 
fornecido for diferente de 0. Para cada número fornecido, 
imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0
for fornecido à repetição deve ser encerrada sem imprimir mensagem alguma.

*/

int main(){

    int numero;

    do{
        printf("Digite o numero: (digite zero para sair)");
        scanf("%d", &numero);

        if(numero > 0){
            printf("Numero Positivo\n");
        }else if(numero < 0){
            printf("Numero Negativo\n");
        }
    }while(numero != 0);
  
/*    int numero;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            if (numero < 0) {
                printf("NEGATIVO\n");
            } else {
                printf("POSITIVO\n");
            }
        }
    } while (numero != 0);*/
  return 0;
}