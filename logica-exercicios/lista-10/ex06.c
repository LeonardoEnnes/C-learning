#include <stdio.h>

int main(){
  int x;
  int i;


  do{
     printf("Digite o numero: ");
     scanf("%d", &x);

     if (x < 1 || x > 1000){
      printf("ERRO, digite novamente\n");
     }
     
  } while (x < 1 || x > 1000);
  

    for (i = 1; i <= x; i++){
        if (i % 2 != 0){
          printf("%d\n", i);
        }
        
     }


  return 0;
}