#include <stdio.h>

int main(void)
{
    // 方法1: 文字配列による初期化（修正版）
    char str1[6] = { 'M', 'A', 'R', 'I', 'O', '\0' };
    printf("%s\n", str1);

    // 方法2: 文字列リテラルによる初期化
    char str2[] = "MARIO";
    printf("%s\n", str2);

    // 方法3: 個別の文字代入による初期化
    char str3[6];
    str3[0] = 'M';
    str3[1] = 'A';
    str3[2] = 'R';
    str3[3] = 'I';
    str3[4] = 'O';
    str3[5] = '\0';
    printf("%s\n", str3);

    return 0;
}
