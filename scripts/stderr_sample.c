#include <stdio.h>

int main() {
    fprintf(stderr, "これはエラーメッセージです。\n");
    return 0;
}


/*
gcc stderr_sample.c -o stderr_sample

./stderr_sample
*/

