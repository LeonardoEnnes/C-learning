#include <stdio.h>
#include <string.h>

struct Estudante
{
  char nome[12];
  float nota;
};

int main(){

  struct Estudante estudante1 = {"joao",  6.0};
  struct Estudante estudante2 = {"juan",  5.0};
  struct Estudante estudante3 = {"lucas", 0.0};
  struct Estudante estudante4 = {"pedro", 8.0};


  struct Estudante estudantes[] = {estudante1, estudante2, estudante3, estudante4};

  for (int i = 0; i < sizeof(estudantes)/sizeof(estudantes[0]); i++)
  {
    printf("%-12s\t", estudantes[i].nome);
    printf("%.2f\n", estudantes[i].nota);

  }
  
  return 0;
}