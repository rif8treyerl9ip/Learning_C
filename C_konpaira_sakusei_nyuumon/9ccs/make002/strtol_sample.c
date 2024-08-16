#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = "123abc";
    char *end;
    // strtol 関数が end の指す先を変更しているのです。これにより、end は元の文字列の "abc" の位置を指すように
    long num = strtol(str, &end, 10);

    if (end == str) {
        printf("変換失敗: 数値が見つかりません\n");
    } else {
        printf("変換された数: %ld\n", num);
        printf("残りの文字列: %s\n", end);
    }

    return 0;
}
