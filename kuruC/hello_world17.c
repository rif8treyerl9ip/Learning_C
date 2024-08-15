#include <stdio.h>

int main(void)
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    switch (no) {
        case 1:
        case 3:
        case 4:
            printf("Male\n");
            break;
        case 2:
            printf("Female\n");
            break;
        default:
            printf("No person with such number\n");
            break;
    }

    return 0;
}
