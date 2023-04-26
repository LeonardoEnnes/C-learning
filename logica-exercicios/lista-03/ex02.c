#include <stdio.h>
/*
2. Elaborar um algoritmo em que o usuário informa a idade e o programa responda sua classe eleitoral:
não-eleitor (abaixo de 16 anos), eleitor obrigatório (entre 18 e 65 anos)
e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos). 
*/
int main(){
  int idade;

  printf("\nDigite sua idade:");
  scanf("%d", &idade);

  if(idade < 16){
    printf("\n Nao-Eleitor (abaixo de 16 anos)");
  }else if(idade >= 18 && idade <= 65){
    printf("\n Eleitor Obrigatorio (entre 18 e 65 anos)");
  }else if(idade >= 16 || idade > 65){
    printf("\n Eleitor facultativo");
  }

  /*
    outra variação 
    else{
      printf("\n Eleitor facultativo");
    }
  */
 
  return 0;
}