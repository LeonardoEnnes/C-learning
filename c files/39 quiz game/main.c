#include <stdio.h>
#include <ctype.h>

int main(){
  char questions[][100] = {"1. What is 5 - 3?:",
                           "2. What is 5 + 4?:",
                           "3. What is 6 - 2?:"};


  char options[][100] = {"A. 2", "B. 10", "C. 1","D. 0",
                          "A. 10", "B. 9", "C. 12","D. 0",
                          "A. 3", "B. 2", "C. 4","D. 1",};

  char answers[3] = {'A', 'B', 'C'};
  int numberOfquestions = sizeof(questions)/sizeof(questions[0]);

  char guess;
  int score = 0;

  printf("QUIZ GAME\n ");
  for (int i = 0; i < numberOfquestions; i++)
  {
      printf("%s\n", questions[i]);

      for(int j = (i * 4); j < (i * 4) + 4; j++){
        printf("%s\n", options[j]);
      }
    printf("guess: ");
    scanf("%c", &guess);
    scanf("%*c"); // clear \n from input buffer

    guess = toupper(guess);

    if (guess == answers[i])
    {
      printf("Correct!!\n");
      score++;
    }else{
      printf("Wrong!!");
    }
    
  }
  
  printf("FINAL SCORE: %d/%d\n", numberOfquestions, score);
  return 0;
}