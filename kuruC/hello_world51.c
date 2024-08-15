#include <stdio.h>

int main() {
    int i = 10;
    double d = 3.14;
    char c = 'A';

    // voidポインタを宣言
    void *void_ptr;

    // int型変数のアドレスを格納
    void_ptr = &i;
    printf("void_ptr points to int: %d\n", *(int*)void_ptr);

    // double型変数のアドレスを格納
    void_ptr = &d;
    printf("void_ptr points to double: %f\n", *(double*)void_ptr);

    // char型変数のアドレスを格納
    void_ptr = &c;
    printf("void_ptr points to char: %c\n", *(char*)void_ptr);

    // 以下のコードはコンパイルエラーになります
    // printf("This will not work: %d\n", *void_ptr);

    return 0;
}
