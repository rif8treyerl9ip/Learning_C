#include <stdio.h>

int count; /* グローバル変数 */

int countfunc(int count);

int main(void)
{
    int count; /* 同名で宣言 */

    countfunc(count);
    count = 10;
    countfunc(count);
    countfunc(count);
    printf("main : count = %d\n", count);
    return 0;
}

int countfunc(int count)
{
    count++;
    printf("%d\n", count);
    return count;
}
