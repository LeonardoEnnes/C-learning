#include <stdio.h>

                  // parametros é oq uma função espera qnd chamada parâmetros permitem que as funções recebam informações externas e as processem em tempo de execução. 
void aniversario(char nome[], int idade){
  printf("\n Feliz Aniversario %s ", nome);
  printf("\n voce e %d anos de idade!", idade);
}

int main(){
  char nome[] = 'Leonardo';
  int idade = 20;
              // argumentos é oq voce está mandando para função, os valores dos argumentos são copiados para os parâmetros correspondentes e podem ser usados ​​dentro da função.
  aniversario(nome, idade);

  return 0;
}

/*Os parâmetros são variáveis declaradas na definição da função, 
que são usados ​​para receber valores passados como argumentos quando a função é chamada.*/