#include <stdio.h>
/*3. 
Elabore um programa que solicita as notas de 10 de alunos e armazena essas notas em um vetor.
Após, o programa deverá calcular a média da turma (média aritmética) e contar quantos alunos
obtiveram nota acima da média (considere que a média é 6). Ao final, o programa deverá escrever a
média da turma e o resultado da contagem dos alunos acima da média. 
*/
int main(){
  float notas[10];
  float soma = 0;
  int numeroAluno = 10;
  float media = 6;
  float mediaTurma;
  int contador = 0;
  int i;

  printf("Digite as notas dos alunos :");
  for (i = 0; i < numeroAluno; i++)
  {
    printf("Aluno %d\n: ", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i];
  }
  
  mediaTurma = (soma / numeroAluno);

  for (i = 0; i < numeroAluno; i++)
  {
  if (notas[i] > media) {
      contador++;
    }
    
  }
  
 printf("\nMedia da turma: %.2f\n", mediaTurma);
  printf("Alunos acima da media: %d\n", contador);

  return 0;
}