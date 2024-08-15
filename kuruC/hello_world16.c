#include <stdio.h>

int main(void)
{
    int no;
    printf("Enter a number (1-4): ");
    scanf("%d", &no);

    switch (no) {
        case 1:
            printf("Spring\n");
            break;
        case 2:
            printf("Summer\n");
            break;
        case 3:
            printf("Autumn\n");
            break;
        case 4:
            printf("Winter\n");
            break;
        default:
            printf("Invalid number\n");
    }

    return 0;
}
