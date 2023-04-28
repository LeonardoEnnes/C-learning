#include <stdio.h>

// recursion is a process in which a function calls itself directly or indirectly

/*
int fun(int n){
  if(n==1){
    return 1;
  }else{
    return 1 + fun(n+1);
  }
}


int main(){
  int n = 3;
  printf("%d", fun(n));
  return 0;
}
*/


// exercise

int fun(int n){
  if(n==0){
    return 1;
  }else{
    return 7 + fun(n-2);
  }
}


int main(){
  printf("%d", fun(4));
  return 0;
}

//result: 15