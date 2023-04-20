#include <stdio.h>
// this is a basic bubble sort

void sort(int array[], int size) //for an array of char,change int for char
{
  for (int i = 0; i < size  -  1; i++)
  {
      for (int j = 0; j < size - i - 1; j++)
      {
        if(array[j] > array[j+1]) /*  if you want this code in descending order use < instead of >  */
        {
          int temp = array[j];
          array[j] = array[j+1];
          array[j+1] = temp;
        }
      }
  }
}

void printArray(int array[], int size) //for an array of char,change int for char
{
  for (int i = 0; i < size; i++)
  {
    printf("%d", array[i]); // make sure to use %c for charecteres
  }
}

int main(){
  int array[] = {9, 1, 5, 6, 8, 10};
  // char array[] = {'F', 'D', 'H', 'A', 'D', 'B'};
  int size = sizeof(array)/sizeof(array[0]); 
  // sizeof(array); this will calculated the size of the array in bytes
  // and to find the numbers of elements is dividing to the size of the array at index 0; sizeof(array[0])

  sort(array, size);
  printArray(array, size);

  return 0;
}