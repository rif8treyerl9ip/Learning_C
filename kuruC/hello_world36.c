#include <stdio.h>

int main(void)
{
    int array[10] = { 42, 79, 13 };

    printf("array[0] = %d\n", array[0]);
    printf("array[1] = %d\n", array[1]);
    printf("array[2] = %d\n", array[2]);
    printf("array[3] = %d\n", array[3]);
    printf("array[4] = %d\n", array[4]);

    // array の要素数を計算
    size_t array_size = sizeof(array) / sizeof(array[0]);
    printf("Number of elements in array: %zu\n", array_size);

    int array2[] = { 42, 79, 13 }; /* 要素数が省略されている */

    printf("array2[0] = %d\n", array2[0]);
    printf("array2[1] = %d\n", array2[1]);
    printf("array2[2] = %d\n", array2[2]);

    // array の要素数を計算
    size_t array2_size = sizeof(array2) / sizeof(array2[0]);
    printf("Number of elements in array2: %zu\n", array2_size);

    int array3[] = { 42, 79, 13, 75, 19 };
    int i;

    for (i = 0; i < 5; i++) {
        printf("array3[%d] = %d\n", i, array3[i]);
    }


    return 0;
}
