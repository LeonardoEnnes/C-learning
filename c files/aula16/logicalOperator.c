#include <stdio.h>
#include <stdbool.h>


// operadores logicos 
/*  
  && (and) checa se duas condições são verdadeiras
  || (pr) se uma condição for verdadeira já basta
  ! (not) reverte o estado de uma condição

*/

int main(){

  bool ensolarado = true;

  if (!ensolarado){
    printf("\n esta ensolarado la fora");
  }else{
    printf("\n esta nublado la fora");
  }
  


  /*float temperatura = 40;

  if (temperatura <= 0 || temperatura >= 30){
    printf("\n o tempo esta ruim!");
  }else{
    printf("\n o tempo esta otimo!!!");
  }
  
*/


  /*float temp = 0;
  bool ensolarado = true;

  if(temp >= 0  && temp <= 30 && ensolarado){
    printf("\no tempo esta bom");
  }else{
    printf("\n o tempo esta ruim");
  }*/

  return 0;
}