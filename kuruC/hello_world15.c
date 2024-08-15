#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 3) {
        printf("Infant: Free\n");
    } else if (age <= 12) {
        printf("Child: 250 yen\n");
    } else {
        printf("Adult: 400 yen\n");
    }

    return 0;
}
