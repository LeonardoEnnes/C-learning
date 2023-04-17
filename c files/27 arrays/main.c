#include <stdio.h>

int main(){
  // array = a data structure that can store many values of the same data type.

  // the first way is: 
  // double prices[] = {7.0, 10.0, 11.0, 5.0};

  // a second way on which we set a size to the array
  double prices[5];

  prices[0] = 12.00;
  prices[1] = 2.00;
  prices[2] = 1.00;
  prices[3] = 7.00;
  prices[4] = 19.00;
  prices[5] = 11.00;

  // third way of setting a array is combining and setting a size
  // double prices[4] = {7.0, 10.0, 11.0, 5.0};

  printf("$%.2lf", prices[0]);

  return 0;
}