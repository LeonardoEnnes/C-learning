#include <stdio.h>
// 2. Elabore um programa que imprima os 100 primeiros números pares
int main(){
    int i;

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d e par\n", i);
        }
    }

  return 0;
}