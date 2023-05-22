#include <stdio.h>
    //3. Elabore um programa em que o usuário informa 10 números e imprime o dobro de cada número informado.

int main(){
   
    int numeros[10];
    int i;

    printf("Informe 10 numeros:\n");

    // Solicita os números ao usuário
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1 );
        scanf("%d", &numeros[i]);
    }

    // Imprime o dobro de cada número
    printf("\nDobro de cada número informado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros[i] * 2);
    }



  return 0;
}