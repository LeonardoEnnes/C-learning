#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double raio;
    double circuferencia;
    double area;
    
    printf("\n Digite o raio: ");
    scanf("%lf", &raio);

    printf("\n Digite a area: ");
    scanf("%lf", &area);


    circuferencia = 2 * PI * raio;
    area = PI * raio * raio;

    printf("\n Circuferencia: %lf \n", circuferencia);
    printf("\n Area: %lf \n", area);

  return 0;
}