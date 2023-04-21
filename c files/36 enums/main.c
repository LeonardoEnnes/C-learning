#include <stdio.h>
      //you can declare inside the main function or outside of the main function

enum Day{sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};
      // you can give an associate integer value 
int main(){
   // enum = a user defined type of named integer identifiers
   // helps to make a program more readable

  enum Day today = mon;
  // printf("%d", today) // enumns are NOT STRINGS, but they can be treated as int

  if (today == sun || today == sat) // this is going to make sense to everyone that is trying to read your code
  {
    printf("\n its the weekend");
  }else
  {
    printf("\n i have to work today");
  }
  
  return 0;
}