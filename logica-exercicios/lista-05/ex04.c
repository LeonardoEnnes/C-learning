#include <stdio.h>


int main(){
  int ano, mes, dia;

  printf("Digite a data: (dia/mes/ano):");
  scanf("%d%d%d", &dia, &mes, &ano);

  if(mes > 12 || mes == 0 || dia == 0 || dia > 31 ||ano == 0 || ano > 2100){
    printf("DATA INVALIDA!");
  }else{
    switch (mes){
    case 2:
    if(dia > 28){
      printf("DATA INVALIDA! Fevereiro tem apenas 28 dias");
      break;
    }
    case 4:
    if(dia > 30){
      printf("DATA INVALIDA! Abril tem apenas 30 dias");
      break;
    }
    case 6:
    if(dia > 30){
      printf("DATA INVALIDA! Junho tem apenas 30 dias");
      break;
    }
    case 9:
    if(dia > 30){
      printf("DATA INVALIDA! Setembro tem apenas 30 dias");
      break;
    }
    case 11:
    if(dia > 30){
      printf("DATA INVALIDA! Novembro tem apenas 30 dias");
      break;
    }
    default:
      printf("Data Valida (%d/%d/%d)", dia, mes, ano);
      break;
    }
  }
  return 0;
}

