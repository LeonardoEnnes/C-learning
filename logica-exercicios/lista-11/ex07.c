#include <stdio.h>


int main(){
  int n; // teste
  float n1, n2, n3;
  int i;
  float media;

  printf("Calculo de Media Ponderada\n");
  printf("Digite o numero de testes: ");
  scanf("%d", &n);


  for ( i = 0; i < n; i++){
   printf("Digite o numero (teste: %d): ", i + 1);
   scanf(" %f", &n1);

   printf("Digite o numero (teste: %d):  ", i + 1);
   scanf("%f", &n2); 

   printf("Digite o numero (teste: %d): ", i + 1);
   scanf("%f", &n3);

   media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
   printf("A media ponderada dos numeros (%.1f, %.1f e %.1f) e: %.1f\n" , n1 , n2, n3, media);
  }
  

  return 0;
}