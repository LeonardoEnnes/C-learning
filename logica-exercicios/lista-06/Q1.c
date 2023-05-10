#include <stdio.h>

int main(){
  int n1, n2, n3, digVerificador;

  printf("Digite o numero de seu CPF (Exemplo: 987 654 321 00)");
  scanf("%d %d %d %d", &n1, &n2, &n3, &digVerificador);

  if(n1 >= 1000 && n2 >= 1000 && n3 >= 1000 && digVerificador >= 100 ){
     printf("Quantidade de dígitos incorreta!");
  }else{
    int d1 = 0, d2 = 0;
    int numeros[11];
    numeros[0] = n1/100;
    numeros[1] = (n1%100)/10;
    numeros[2] = n1%10;
    numeros[3] = n2/100;
    numeros[4] = (n2%100)/10;
    numeros[5] = n2%10;
    numeros[6] = n3/100;
    numeros[7] = (n3%100)/10;
    numeros[8] = n3%10;
    numeros[9] = digVerificador/10;
    numeros[10] = digVerificador%10;

    int soma = 0;
    for(int i = 0; i < 9; i++) {
        soma += numeros[i]*(10-i);
    }

    int resto = soma%11;
    if (resto == 0 || resto == 1) {
        d1 = 0;
    }else {
        d1 = 11 - resto;
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += numeros[i]*(11-i);
    }
    
    resto = soma%11;
    if (resto == 0 || resto == 1) {
        d2 = 0;
    } else {
        d2 = 11 - resto;
    }
    if (d1 == numeros[9] && d2 == numeros[10]) {
        printf("CPF valido.\n");
    } else {
        printf("CPF invalido.\n");
    }
  }
  return 0;
}
