#include <stdio.h>
/*9.. Escreva um programa em que o usuário informa o número de alunos de uma turma. 
Após o programa deve ler as notas das 2 avaliações de cada aluno e calcular 
e escrever: a média de cada aluno, e se o aluno foi aprovado ou reprovado. 
Considere como média para aprovação 6.*/

int main(){
  int numeroAlunos;

  printf("Digite o numero de Alunos: ");
  scanf("%d", &numeroAlunos);

  int notas[numeroAlunos];

  for (int i = 0; i < numeroAlunos; i++)
  {
    printf("\n Aluno %d\n", i + 1);

    printf("Digite a nota 1:");
    scanf("%d", &notas[i]);

    printf("Digite a nota 2:");
    scanf("%d", &notas[i + 1]);

    int media = (notas[i] + notas[i + 1]) / 2;
    printf("Media do aluno %d: %d\n", i + 1, media);

    if (media >= 6)
    {
      printf("Aluno Aprovado\n");
    }else{
      printf("Aluno Reprovado\n");
    }
  }
  
  return 0;
}
  
  
