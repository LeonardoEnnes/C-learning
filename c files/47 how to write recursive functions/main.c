#include <stdio.h>

// base condition is the one which dons´t require to cal the same function again and it helps in stopping the recursion
int fact(int n){            
  if(n == 1){// base case (2)
    return 1;
  }else{ // recursive procedure (1)
    return n*fact(n-1);
  }
}

int main(){     
  int n;
  printf("Enter the number: \n");
  scanf("%d", &n);
  printf("The factorial of a number %d is %d \n", n, fact(n));

  return 0;
}