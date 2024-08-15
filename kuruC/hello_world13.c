#include <stdio.h>

int main() {
    int val1, val2, answer;

    // テストケース1: 等しい値
    val1 = 5;
    val2 = 5;
    answer = val1 == val2;
    printf("val1 = %d, val2 = %d, answer = %d\n", val1, val2, answer);

    // テストケース2: 異なる値
    val1 = 5;
    val2 = 10;
    answer = val1 == val2;
    printf("val1 = %d, val2 = %d, answer = %d\n", val1, val2, answer);

    return 0;
}
