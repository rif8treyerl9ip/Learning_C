#include <stdio.h>

int main(void)
{
    printf("%d\n", (int)(1.05 * 360));
    printf("%f\n", (1.05 * 360));
    printf("%d\n", (1.05 * 360));  // miss
    return 0;
}
