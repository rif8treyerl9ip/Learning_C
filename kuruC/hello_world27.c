#include <stdio.h>

int main(void)
{
    int x = 5;
    int *ptr = &x;
    printf("%d\n", *ptr);
    int y;
    int *ptr2 = &y;
    *ptr2 = 10;
    printf("%d\n", *ptr2);
    printf("%d\n", y);
}
