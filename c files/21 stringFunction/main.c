#include <stdio.h>
#include <string.h>  // sempre incluir esse para strings

 /*o basico para os pointers no futuro*/
int main(){
  char string1[] = "leo";
  char string2[] = "ennes";


  //strlwr(string1);               // converte uma string para lowercase
  //strupr(string1);               // converte uma string para upercase
  //strcat(string1, string2);      // concatena (junta) duas strings
  //strncat(string1, string2, 1);  // concatena n caracteres de string2 para string1
  //strcpy(string1, string2);      // copia uma string para outra
  //strncpy(string1, string2, 4);  // copia n caracteres de string2 para string 1

   //strset(string1, '?');        // vai mudar todos os caracteres da string para um caracter selecionado 
   //strnset(string1, 'x', 1);    // vai mudar o primeiro n caracter da string para um caracter dado
   //strrev(string1);             // reverte a string

   //int result = strlen(string1);                   // retorna string length para um int
   //int result = strcmp(string1, string2);          // string compara todos os caracteres 
   //int result = strncmp(string1, string2, 1);      // string compara n caracteres
   //int result = strcmpi(string1, string1);         // string compare all (ignore case)
   //int result = strnicmp(string1, string1, 1);     // string compare n characters (ignore case)
  
  
  printf("%s", string1);

  return 0;
}