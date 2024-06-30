#include <stdio.h>

int main(void) {
  int score;
  printf("Please enter your score:");
  scanf("%d", &score);

  if (score > 100) {
    printf("The input is greater than 100, adjusting it to 100.\n");
    score = 100;
  }

  printf("Your score is %d.\n", score);
  return 0;
}
