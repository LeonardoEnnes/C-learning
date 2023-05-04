#include <stdio.h>


int main(){
  int ano, mes, dia;

  printf("Digite a data: (dia/mes/ano):");
  scanf("%d%d%d", &dia, &mes, &ano);

  if(mes > 12 || mes == 0 || dia == 0 || dia > 31 ||ano == 0 || ano > 2100){
    printf("DATA INVALIDA!");
  }else{
    if (mes == 2 && dia > 28){
      printf("DATA INVALIDA! Fevereiro tem apenas 28 dias");
    } else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30){
      printf("DATA INVALIDA! Este mes tem apenas 30 dias");
    } else if (dia > 31) {
      printf("DATA INVALIDA!");
    } else {
      printf("Data Valida (%d/%d/%d)", dia, mes, ano);
    }
  }
  return 0;
}



    

