#include <stdio.h>
/*6. Elabore um programa para preencher (com valores informados pelo usuário) um vetor B de 10
elementos inteiros. Após, o programa deve solicitar a leitura de um valor e armazená-lo em uma
variável X. Por último, o programa deverá escrever as posições (índices) do vetor B em que aparece
o valor armazenado na variável X. */
int main(){
  int b[10];
  int x;
  int i;

  printf("Digite os dez valores\n");
  for (i = 0; i < 10; i++){
    printf("Digite o valor de b[%d]", i);
    scanf("%d", &b[i]);
  }
  
  //buscando o valor
  printf("Digite o valor que deseja buscar em b[10]\n");
  scanf("%d", &x);

 // Procurando o valor e escrevendo as posições (índices)
  for (i = 0; i < 10; i++){
    if (b[i] == x){
      printf("o valor %d aparece no b[%d]\n", x, i);
    }
    
  }
  
  return 0;
}


