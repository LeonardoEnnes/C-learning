#include <stdio.h>
#include <ctype.h>

int main(){
  char unit;
  float temp;

  printf("\n A temperatura e (F) ou (C) : \n");
  scanf("%c", &unit);
  unit = toupper(unit);

  if (unit == 'C'){
    printf("\n Digite a temperatura em Celsius: ");
    scanf("%f", &temp);
    temp = (temp * 9 / 5) + 32;
    printf("\n A temperatura em Farenheit e: %.1f", temp);
  }else if(unit == 'F'){
    printf("\n Digite a temperatura em Farenheit ");
    scanf("%f", &temp);
    temp = ((temp - 32) * 5) / 9;
    printf("\n A temperatura em Celsius e: %.1f", temp);
  }else{
    printf("\n %c Nao e uma unidade valida, por favor digte uma valor valido.", unit);
  }
  
  return 0;
}