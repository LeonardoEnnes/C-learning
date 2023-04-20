#include <stdio.h>

typedef struct // if we use typedef when declaring a struct we dont need the struct keyword to creat a struct, we just use the nickname as the datatype
{
  char name[25];
  char password[12];
  int id;
} User;


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

  return 0;
}