#include <stdio.h>

int sum(int); /* プロトタイプ宣言。変数は不要、変数の型もなくても動く */

int main(void)
{
    sum(100);
    return 0;
}

int sum(int max)
{
    printf("%d\n", (1 + max) * max / 2);
    return 0;
}
