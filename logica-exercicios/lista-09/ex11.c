#include <stdio.h>
/*Elaborar um programa em C que receba a temperatura média de cada mês do ano e armazene
essas temperaturas em um vetor. Após o programa deverá imprimir a temperatura média de cada
mês, a maior temperatura registrada, a menor temperatura registra e em que mês elas
aconteceram.*/

int main(){
   float temperaturas[12];
    float temperaturaMaxima, temperaturaMinima;
    int mesMaximo, mesMinimo;
    float soma = 0;
    float media;
    int i;

    // Lendo as temperaturas médias de cada mês
    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura media do mes %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i]; // e a msm coisa que fazer soma = soma + temperatura[i]

        // Inicializando a temperatura máxima e mínima com o valor do primeiro mês
        if (i == 0) {
            temperaturaMaxima = temperaturas[i];
            temperaturaMinima = temperaturas[i];
            mesMaximo = i;
            mesMinimo = i;
        } else {
            // Verificando se a temperatura atual é maior que a temperatura máxima
            if (temperaturas[i] > temperaturaMaxima) {
                temperaturaMaxima = temperaturas[i];
                mesMaximo = i;
            }
            // Verificando se a temperatura atual é menor que a temperatura mínima
            if (temperaturas[i] < temperaturaMinima) {
                temperaturaMinima = temperaturas[i];
                mesMinimo = i;
            }
        }
    }

    // Calculando a temperatura média
    media = soma / 12;

    // Imprimindo as temperaturas médias de cada mês
    printf("\nTemperatura media de cada mês:\n");
    for (i = 0; i < 12; i++) {
        printf("Mes %d: %.2f\n", i + 1, temperaturas[i]);
    }

    // Imprimindo a maior temperatura registrada e em qual mês ocorreu
    printf("\nMaior temperatura registrada: %.2f (Mes %d)\n", temperaturaMaxima, mesMaximo + 1);

    // Imprimindo a menor temperatura registrada e em qual mês ocorreu
    printf("Menor temperatura registrada: %.2f (Mes %d)\n", temperaturaMinima, mesMinimo + 1);

    // Imprimindo a temperatura média do ano
    printf("Temperatura media do ano: %.2f\n", media);

  return 0;
}

