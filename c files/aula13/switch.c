#include <stdio.h>


/*switch é uma alternativa mais eficiante para usar varios else if
 perminte um valor ser testado pela igualdade contra varios casos*/


 /*É uma forma de reduzir a complexidade de vários if … else encadeados. 
 É muito utilizado, principalmente para uso em estruturas de menu. O conteúdo de uma variável
é comparado com um valor constante, e caso a comparação seja verdadeira, um determinado comando é executado.*/

// nao e boa pratica usar MUITOS else if por isso se usa switch:)


int main(){

  char grade;

  printf("\n Digite sua Nota:");
  scanf("%c", &grade);

  /*if (grade == 'A'){
    printf("\n Parabens voce atingiu a nota maxima \n");
  }else if(grade == 'B'){
    printf("\n Voce foi bem \n");
  }else if (grade == 'C'){
    printf("\n Poderia melhorar \n");
  }else if(grade == 'D'){
    printf("\n Pelo menos não é um F \n");
  }else if(grade == 'F'){
    printf("\n Voce reprovou, F \n");
  }else{
    printf("\n Nota invalida");
  }*/
  
  switch (grade){
  case 'A':
    printf("\n Perfeito");
    break;
  case 'B':
    printf("\n Voce foi bem");
    break;
  case 'C':
    printf("\n Poderia melhorar");
    break;
  case 'D':
    printf("\n Pelo menos nao e um F");
    break;  
  case 'F':
    printf("\n Voce foi reprovado F !");
    break;
  default:
    printf("\n Por favor digite uma nota valida.");
}

return 0;
}