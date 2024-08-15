#include <stdio.h>

int main(void) {
    int int_val = 1;
    char char_val = 'A';
    long long_val = 1000000L;
    float float_val = 1.5f;
    double double_val = 2.5;
    const char* str_val = "hello";

    // 正常に動作する switch 文（整数型との比較）
    switch (int_val) {
        case 1: printf("Integer is 1\n"); break;
        default: printf("Integer is not 1\n");
    }

    // 正常に動作する switch 文（文字型との比較）
    switch (char_val) {
        case 'A': printf("Character is A\n"); break;
        default: printf("Character is not A\n");
    }

    // 正常に動作する switch 文（長整数型との比較）
    switch (long_val) {
        case 1000000L: printf("Long is 1000000\n"); break;
        default: printf("Long is not 1000000\n");
    }

    // 以下はコンパイルエラーになる例

    // 浮動小数点数との比較（コンパイルエラー）

    // switch (float_val) {
    //     case 1.5f: printf("Float is 1.5\n"); break;
    //     default: printf("Float is not 1.5\n");
    // }


    // double型との比較（コンパイルエラー）
    /*
    switch (double_val) {
        case 2.5: printf("Double is 2.5\n"); break;
        default: printf("Double is not 2.5\n");
    }
    */

    // 文字列との比較（コンパイルエラー）
    /*
    switch (str_val) {
        case "hello": printf("String is hello\n"); break;
        default: printf("String is not hello\n");
    }
    */

    return 0;
}
