#include <stdio.h>

/*
ADVANTAGE

EVERY RECURSIVE PROGRAM CAN BE MODELED INTO AN ITERATIE PROGRAM BUT RECURSIVE PROGRAMS ARE MORE
ELEGANT AND REQUIRES RELATIVY LESS LINES OF CODE

*/

/*EXAMPLE: program to calculate factorial of a number can be written in both iterative as well as recursive way as follows:*/

// iterative (require less space than the recursive)
/*int fact(int n){
  int res=1;
  while(n!=0){
    res = res*n;
    n--;
  }
  return res;
}

int main(){
  printf("%d", fact(5));

  return 0;
}
*/

// recursive (the code is clean than the other and requires less code)

int fact(int n){
  if(n==1){
    return 1;
  }
  else{
    return n*fact(n-1);
  }
}

int main(){
  printf("%d", fact(5));
  return 0;
}


/*
DISADVANTAGE: RECURSIVE PROGRAMS REQUIRES MORE SPACE THAN ITERATIVE.
  WHENEVER YOU ARE SHORT IN MEMORY USE ITERATIVE PROGRAMS
*/