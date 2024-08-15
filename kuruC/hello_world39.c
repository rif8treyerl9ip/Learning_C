#include <stdio.h>

int main(void)
{
    char c = 'A';
    printf("%c\n", c);
    printf("ASCII (decimal): %d\n", c);
    printf("ASCII (hexadecimal): 0x%X\n", c);

    char c2 = 'A' + 9; /* 最初は0なので9を足す */
    printf("%c\n", c2);

    char e = '8'; /* 数字 */
    int suuti = e - '0'; /* 数値に変換 */
    printf("%d\n",suuti);
    return 0;
}
