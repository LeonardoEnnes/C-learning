#include <stdio.h>
#include <string.h>

struct player
{
  char name[12];
  int score;
}; // dont forget the ;

int main(){
    // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)

  struct player player1;
  struct player player2;

  strcpy(player1.name, "dudu");
  player1.score = 6;

  strcpy(player2.name, "ana");
  player2.score = 10;

  printf("%s\n", player1.name);
  printf("%d\n", player1.score);

  printf("%s\n", player2.name);
  printf("%d\n", player2.score);
  return 0;
}