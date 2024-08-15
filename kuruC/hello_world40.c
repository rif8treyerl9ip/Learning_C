#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c = 'A';
    // char c = '0';
    int suuti;

    if (isdigit(c)) {
        /* 判定部分 */
        suuti = c - '0';
    } else {
        suuti = 0;
    }

    printf("%d\n",suuti);
    return 0;
}
