#include <stdio.h>


/*
  Unions

  Union is a user defined data type but unlike structures, union members share same
  memory location.

  in union, members will share same memory location. if we make changes in one member then
  it will be reflected to other members as well.

*/

/*
union abc {
  int a;
  char b;
}var;

int main(){
  var.a = 65;
  printf("a = %d\n", var.a);
  printf("b = %c\n", var.b);

  return 0;
}
*/

/*
output:
 a = 65
 b = a

*/


// HOW TO DECIDE THE SIZE OF THE UNION

/* SIZE OF THE UNION IS TAKEN ACCORDING TO THE SIZE OF THE LARGEST MEMBER OF THE UNION. */

/* EXAMPLE

union abc {
 int a;
 char b;
 double c;
 float d;
};

int main(){
  printf("%ld", sizeof(union abc));

  return 0;
}
*/
// Output: 8 (bc its the largest)


// ACCESSING MEMBERS USING POINTERS
// WE CAN ACESS MEMBERS OF UNION THROUGH POINTERS BY USING THE ARROUW (->) OPERATOR

union abc {
  int a;
  char b;
};

int main(){
  union abc var;
  var.a = 90;
  union abc *p = &var;
  printf("%d %c", p->a, p->b);
  return 0;
}

// output 90 Z 