#include <stdio.h>
#include <stdlib.h>

int main() {
    // int型の配列を動的に確保
    int *numbers;
    int size = 5;

    numbers = (int *)malloc(size * sizeof(int));

    if (numbers == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }

    // 確保したメモリに値を代入
    for (int i = 0; i < size; i++) {
        numbers[i] = i * 10;
    }

    // 値を表示
    printf("確保したメモリの内容:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // メモリの解放
    free(numbers);

    return 0;
}

/*
gcc -o dynamic_memory_example dynamic_memory_example.c
./dynamic_memory_example
*/
