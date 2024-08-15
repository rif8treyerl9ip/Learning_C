#include <stdio.h>

int main(void)
{
    char str[32];
    // %32s は最大31文字まで読み込み、自動的にヌル終端文字を追加
    // これにより、バッファオーバーフローを防ぐ
    scanf("%31s", str);

    printf("%s\n", str);
    return 0;

}
