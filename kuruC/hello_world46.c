#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[256];
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++);
    printf("%d\n", i);

    int j;
    j = strlen(str);

    printf("%d\n", j);
    return 0;
}
