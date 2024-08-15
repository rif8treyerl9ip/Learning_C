#include <stdio.h>

// 関数プロトタイプを追加
int sum(void);

int main(void)
{
    sum(); /* 呼び出し部分 */
    return 0;
}

int sum(void)
{
    printf("%d\n", (1 + 100) * 100 / 2);
    return 0;
}
