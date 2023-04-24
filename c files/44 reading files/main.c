#include <stdio.h>


// with this you will read a file in some place of your computer
// remenber: to read you need to create a pointer
int main(){

  FILE *pF = fopen("C:\\Users\\Renato\\Desktop\\test.txt", "r");
  char buffer[255];

  if(pF == NULL)
  {
    printf("Unable to open the file \n");
  }else
  {
      while (fgets(buffer, 255, pF) != NULL)
      {
        printf("%s", buffer);
      }
  }


  fclose(pF);

  return 0;
}