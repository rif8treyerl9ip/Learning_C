#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score > 100)
    {
        printf("The input is greater than 100, adjusting it.\n");
        score = 100;
    }

    printf("Your score is %d.\n", score);
    return 0;
}
