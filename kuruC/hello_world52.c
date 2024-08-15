#include <stdio.h>

int main() {
    // 別の変数を宣言し、そのアドレスを代入する方法
    int a = 1099;     // 適切な整数変数を用意
    int *p = &a;      // iにはaのアドレスを割り当てる

    // アドレスを出力
    printf("Address of a: %p\n", &a);
    printf("Address of a: %p\n", p);
    // 逆参照した値を出力
    printf("Value at address: %d\n", *p);
    printf("Value at address: %d\n", a);

    return 0;
}
