#include <stdio.h>
/*5. Elabore um programa no qual o usuário informa 10 números e, para cada número, imprima se o
número é divisível por 3 ou não.*/
int main(){
   /*
   int numero[10];
   int i;

   printf("Digite os 10 numero\n");
   
   // solicitando ao usuario
   for (i = 0; i < 10; i++)
   {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numero[i]);
   }
  
  //imprimindo se o numero e divisivel por 3
  for (i = 0; i < 10; i++)
  {
    if (numero[i]%3 == 0)
    {
      printf("\n%d e divisivel por 3\n ", numero[i]);
    }else{
      printf("\n%d nao e divisivel por 3 \n ", numero[i]);
    }
  }*/
  
  int numero[10];
  int i;

  printf("Digite os dez numeros: \n");

  //solicitando o numero ao usuario
  for ( i = 0; i < 10; i++)
  {
    printf("Numero %d: ", i + 1);
    scanf("%d", &numero[i]);
  }
  
  // verificando se o numero e divisivel por 3
  for ( i = 0; i < 10; i++)
  {
    if (numero[i]%3==0 )
    {
      printf("o numero %d e divisivel por 3\n", numero[i] );
    }else{
      printf("o numero %d nao e divisivel por 3\n", numero[i] );
    }
  }
  
  return 0;
}