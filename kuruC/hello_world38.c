#include <memory.h>
#include <stdio.h>

int main(void)
{
    int array1[] = { 42, 79, 13, 19, 41, 999};
    int array2[] = { 1, 2, 3, 4, 5 };
    int i;

    // array2の元の内容を表示
    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    // array1の内容をarray2にコピー
    memcpy(array2, array1, sizeof(array1));

    // コピー後のarray2の内容を表示
    for (i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}
