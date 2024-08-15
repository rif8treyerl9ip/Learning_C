#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[] = "145";
    int suuti = atoi(str);
    printf("%d\n", suuti);

    char str2[] = "B";
    int suuti2 = atoi(str2);
    printf("%d\n", suuti2);

    char str3[10];
    strcpy(str3, "MARIO");
    printf("%s\n", str3);

    char str4[] = "MARIO", str5[10];
    strncpy(str5, str4, 3);
    str5[3] = '\0'; /* EOSを付加 */
    printf("%s\n", str5);

    char str6[] = "DRAGON""QUEST";
    printf("%s\n", str6);

    return 0;
}
