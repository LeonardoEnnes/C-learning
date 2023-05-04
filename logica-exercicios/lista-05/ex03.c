#include <stdio.h>
#include <math.h>
/*Você deverá elaborar uma calculadora contendo as seguintes operações: 1: divisão inteira, 2: resto da divisão,
3: raiz quadrada e 4: potenciação. Nesta calculadora deverá ser solicitado o primeiro valor, a operação e o
segundo valor. No entanto, se a operação for raiz quadrada, o segundo valor não deve ser solicitado. Ao final o
algoritmo deve imprimir na tela o resultado. Para isso, utilizem a biblioteca math e as funções sqrt e pow*/
int main(){
 int op;
 float n1, n2, resultado;

 printf("Digite o primeiro valor: ");
 scanf("%f", &n1);

 printf("Digite a operacao: \n1: Divisao Inteira \n2: Resto da Divisao \n3: Raiz Quadrada \n4: Potenciacao\n");
 scanf("%d", &op);

  if(op == 3){
   resultado = sqrt(n1);
  }else{
  printf("Digite o segundo valor: ");
  scanf("%f", &n2);
    switch (op)
    {
    case 1:
      resultado = (int)n1 / (int)n2;
      break;
    case 2:
      resultado = (int)n1 % (int)n2;
    break;
    case 4:
      resultado = pow(n1, n2);
      break;
    default:
      printf("OPERAÇÃO INVALIDA!");
      break;
    }
  }
  printf("Resultado %.2f\n", resultado);
  return 0;
}