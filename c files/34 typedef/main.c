#include <stdio.h>

// typedef is commonly use nowadays... get used to it
typedef struct // if we use typedef when declaring a struct we dont need the struct keyword to creat a struct, we just use the nickname as the datatype
{
  char name[25];
  char password[12];
  int id;
} User;

typedef struct
{
  int x;
  int y;
} Point;

int main(){
 // typedef = reserved keyword that gives an existing datatype a "nickname"

  User user1 = {"Bro", "password123", 123456789};
  User user2 = {"Bra", "password321", 987654321};

  printf("%s\n", user1.name);
  printf("%s\n", user1.password);
  printf("%d\n", user1.id);
  printf("\n");
  printf("%s\n", user2.name);
  printf("%s\n", user2.password);
  printf("%d\n", user2.id);

  Point p1 = {5, 4};
  Point p2 = {.x = 8, .y = 9}; // this is another way, with the method you can also change the order and it will work just the same :)

  Point p2 = // if we get a big structure we do this, spread in multiple lines to get clear to read (you will see this in big structures)
   {.x = 8, 
    .y = 9
   }; 

  printf("p1.x: %d\n", p1.x);
  printf("p1.y: %d\n", p1.y);

  printf("p2.x: %d\n", p2.x);
  printf("p2.y: %d\n", p2.y);


  return 0;
}