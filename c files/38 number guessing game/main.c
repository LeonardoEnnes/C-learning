#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  const int MIN = 1;
  const int MAX = 90;
  int guess;
  int guesses;
  int answer;

  //uses the current time as a seed
  srand(time(0));

  // generates a random number between MIN and MAX
  answer = (rand() % MAX) + MIN;

  do{
    printf("Enter a guess: ");
    scanf("%d", &guess);
    if (guess > answer){
      printf("Too High");
    }else if(guess < answer)
    {
      printf("Too low");
    }else{
      printf("CORRECT");
    }
    guesses++;
  }while(guess != answer);

  printf("answer: %d\n", answer);
  printf("guesses: %d\n", guesses);

  return 0;
}