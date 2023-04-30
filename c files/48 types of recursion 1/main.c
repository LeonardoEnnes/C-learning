#include <stdio.h>
/*
  THERE IS FOUR TIPES OF RECURSION
  1 - DIRECT RECURSION
  2 - INDiRECT RECURSION
  3 - TAIL RECURSION
  4 - NON-TAIL RECURSION

  PART I : (1 & 2)

  DIRECT RECURSION: A FUNCTION IS CALLED DIRECT RECURSIVE IF IT CALLS THE SAME 
  FUNCTION AGAIN.

  STRUCTURE:

  fun(){
    // code
    fun();
    // code
  }

  INDiRECT RECURSION: A FUNCTION (LETS SAY FUN) IS CALLED INDIRECT RECURSIVE
  IF IT CALLS ANOTHER FUNCTION(LETS SAY FUN2) AND THEN FUN2 CALLS FUN DIRECTLY OR INDIRECTLY

  STRUCTURE:

  fun(){                     
    // some code
    fun2();
    // some code
  }

   fun2(){                     
    // some code
    fun();
    // some code
  }

*/

void odd();
void even();
int n=1;

void odd(){
  if(n <= 10){
    printf("%d ", n+1);
    n++;
    even();
  }
  return;
}

void even(){
  if(n <= 10){
    printf("%d ", n-1);
    n++;
    odd();
  }
  return;
}

int main(){
  int n=1;
  odd();
  return 0;
}