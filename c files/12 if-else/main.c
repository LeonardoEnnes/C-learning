#include <stdio.h>

int main(){

  int age;

  printf("\n Digite sua idade: ");
  scanf("%d", &age);

  if(age >= 18){
    printf("\n voce esta inscrito ");
  }else if (age == 0){
    printf("\n idade invalida, por favor digite sua idade.");
  }else if (age < 0 ){
    printf("\n idade invalida");
  }else{
    printf("\n voce e novo demasi");
  }

  return 0; 
}