#include <stdio.h>
/*
  THERE IS FOUR TIPES OF RECURSION
  1 - DIRECT RECURSION
  2 - INDiRECT RECURSION
  3 - TAIL RECURSION
  4 - NON-TAIL RECURSION

  PART 2 : (3 & 4)

  TAIL RECURSION: A recursive function is said to be tail recursive if the recursive 
  call is the last thing done by the function. there is no need to keep record
  of previous state

  void fun(int n){
    if(n == 0){
      return;
    }else{
      printf("%d", n);
      return fun(n-1)
    }
  }

  int main(){
    fun(3);
    return 0;
  }

  output 3 2 1

    ////

  NON-TAIL RECURSION: is said to be non tail recursive if the recursive
  call is not the last thing done by the function. After returning the block
  there is something left to evaluate

  void fun(int n){
    if(n == 0)]{
      return;
    }else{
      fun(n-1);
      printf("%d", n);
    }
  }
  int main(){
    fun(3);
    return 0;
  }

  output: 1 2 3 

  one more example of non tail:

  int fun(int n){
    if(n == 0){
      return 0;
    }else{
      return 1 + fun(n/2);
    }
  }

    int main(){
    printf("%d", fun(8));
    return 0;
  }

  output: 3

*/

