#include <stdio.h>


/*. Elabore um programa que efetue o cálculo do salário líquido de um professor. Os dados fornecidos
serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS. O
cálculo deve multiplicar o valor da hora aula pelo número de aulas dadas e subtrair o percentual de
desconto do INSS (que será fornecido pelo usuário).*/

int main(){
  float valorAula, desconto, salarioBruto, salarioLiquido;
  int numeroAulas;

  printf("\n Digite o valor da hora aula");
  scanf("%f", &valorAula);

  printf("\n Digite o número de aulas dadas no mes");
  scanf("%f", &numeroAulas);

  printf("\n Digite o percentual de desconto do inss");
  scanf("%f", &desconto);

  salarioBruto = valorAula * numeroAulas;
  salarioLiquido = salarioBruto - (salarioBruto * desconto/100);
  
  printf("\n Salario Liquido: $%.2f \n", salarioLiquido);
  return 0;
}