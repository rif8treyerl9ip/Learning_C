#include <stdio.h>

// 値渡しの関数
void incrementByValue(int x) {
    x++;
    printf("Inside incrementByValue: x = %d\n", x);
}

// ポインタを使用した"参照渡し"の関数
void incrementByReference(int *x) {
    (*x)++;
    printf("Inside incrementByReference: *x = %d\n", *x);
}

int main() {
    int num = 10;

    printf("Original value: num = %d\n", num);

    // 値渡し
    incrementByValue(num);
    printf("After incrementByValue: num = %d\n", num);

    // ポインタを使用した"参照渡し"
    incrementByReference(&num);
    printf("After incrementByReference: num = %d\n", num);

    return 0;
}
