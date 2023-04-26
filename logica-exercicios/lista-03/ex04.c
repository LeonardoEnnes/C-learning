#include <stdio.h>
/*
4. Precisamos calcular o salário semanal de um funcionário. Sabemos que o funcionário ganha X reais
por hora normal trabalhada.
 Sabe-se ainda que a jornada normal de trabalho é de 40 horas/semana
e que ele ganha 50% a mais sobre o valor da hora normal, por hora extra trabalhada. Elabore um
algoritmo em que o usuário informa o valor da hora normal e a quantidade de horas trabalhada na
semana. 
O algoritmo deve calcular o salário normal, o salário extra e o salário total do funcionário na
semana. */
int main(){
  float valorHora, horasTrabalhadas, salarioNormal, salarioExtra, salarioTotal;

  printf("\n Digite o valor da hora trabalhada: ");
  scanf("%f", &valorHora);

  printf("\n Digite a quantidades de horas trabalhadas: ");
  scanf("%f", &horasTrabalhadas);

  if(horasTrabalhadas <= 40){
    salarioNormal = valorHora * horasTrabalhadas;
    salarioExtra = 0;
  }else{
    salarioNormal = valorHora * 40;
    salarioExtra = valorHora * 1.5 * (horasTrabalhadas - 40);
  }

  salarioTotal = salarioNormal + salarioExtra;

  printf("\n Salario normal: R$%.2f", salarioNormal);
  printf("\n Salario Extra: R$%.2f", salarioExtra);
  printf("\n Salario total: R$%.2f", salarioTotal);
  return 0;
}