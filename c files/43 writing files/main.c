#include <stdio.h>

int main(){

   // WRITE/APPEND A FILE
   FILE *pF = fopen("C:\\Users\\Renato\\Desktop\\test.text", "w"); // this will make a appear on the desktop

   fprintf(pF, "Spongebob Squarepants");

   fclose(pF);
   
   // DELETE A FILE
   /*
   if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted!");
   }
   */


  /*
  - The w mode means that the file is opened for writing. To insert content to it, you can use the fprint() 
  - If you want to add content to a file without deleting the old content, you can use the a mode.*/
  return 0;
}