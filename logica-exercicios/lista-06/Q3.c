#include <stdio.h>
/*Questão 3 - questao3.c) (2,0 pontos): Lara é uma garota que espera o ano inteiro pelo Natal.
Ajude a Lara fazendo um programa que peça para o usuário digitar o dia e o mês atual e calcule
quantos dias faltam para a chegada do dia 25 de dezembro do ano corrente. Caso a data digitada
seja 25 12, mostre a mensagem “Feliz Natal!”. Caso o Natal já tenha passado, mostre “O Natal ja
passou”. E caso seja digitada uma data inválida, mostre “Data inexistente”. Obs.: Suponha que
todos os meses possuem 30 dias e o ano 360 dias.
Entrada: 2 números inteiros representando o dia e o mês, respectivamente.
Saída: uma mensagem informando a situação da data digitada em relação ao Natal.*/
int main(){
  int dia, mes, diasRestantes;

  printf("Digite a data (dia/mes)");
  scanf("%d %d", &dia, &mes);

  if(mes < 1 || mes > 12 || dia < 1 || dia > 30){
    printf("Data inexistente");
  }else if (dia == 25 && mes == 12){
    printf("Feliz Natal!");
  }else if(mes == 12 && dia < 25){
    diasRestantes = 25 - dia;
    printf("Faltam %d dias para o natal", diasRestantes);
  }else if(mes == 12 && dia > 25 && dia <= 30){
    printf("O natal ja passou");
  }else{
    diasRestantes = (11 - mes) * 30 + (25 - dia);
    printf("Faltam %d dias para o natal", diasRestantes);
  }
  
  
  

  return 0;
}