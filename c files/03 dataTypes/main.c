#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  char a = 'C';     // caracter unico  %c
  char b[] = "Bro"; // array de caracteres

  float c = 3.141592; // 4 bytes (32 bytes de precisão) 6 - 7 digitos %f
  double d = 3.14159212322122112; // 8bytes (64 bytes de precisão) 15 - 16 %lf

  bool e = true; // 1 byte (true ou falso) %d (1 = true, 0 = false)

  char f = 100; // 1 byte (-128 ate +127) %d ou %c        (se passar do maximo volta para o menor valor -128)
  unsigned char g = 225; // 1 byte (0 ate +255) %d ou %c  (se passar do maximo volta para 0) (unsigned retira possibilidade de numeros negativos)

  short h = 32767; // 2 bytes (-32,768 ate +32,767) %d
  unsigned short i = 65535; // 2 bytes (0 ate +65,535) %d

  int j = 2147483647; // 4 bytes (-2,147,483,647 até +2,147,483,647) %d
  unsigned int k = 4294967295; // 4 bytes (0 até +4,294,967,295) %u

  long long int l = 9223372036854775807; // 8 bytes (- 9 quintilhões ate +9 quintilhões) %lld
  unsigned long long int m = 18446744073709551615U; //  8 bytes ( quintilhões ate +18 quintilhões) %llu

  printf("%c \n", a); // char
  printf("%s \n", b); // array de cacteres
  printf("%f \n", c); // float
  printf("%lf \n", d); // double
  printf("%d \n", e); // bool
  printf("%d \n", f); // char como valor numerico
  printf("%d \n", g); // unsigned char como valor numerico
  printf("%d \n", h); // short
  printf("%d \n", i); // unsigned short
  printf("%d \n", j); // int
  printf("%u \n", k); // unsigned int
  printf("%lld \n", l); // long long int
  printf("%llu \n", m); // unsigned long long int

  return 0;
}