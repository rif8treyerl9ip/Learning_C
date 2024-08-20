#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr_malloc, *arr_calloc;
    int n = 5;

    // mallocを使用して5つのint型要素の配列を確保
    // コンパイラの最適化により、未使用のメモリが0で初期化されている可能性
    arr_malloc = (int*)malloc(n * sizeof(int));

    // callocを使用して5つのint型要素の配列を確保
    arr_calloc = (int*)calloc(n, sizeof(int));

    if (arr_malloc == NULL || arr_calloc == NULL) {
        printf("メモリ割り当てに失敗しました\n");
        return 1;
    }

    printf("malloc で確保した配列の内容:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_malloc[i]);
    }
    printf("\n");

    printf("calloc で確保した配列の内容:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr_calloc[i]);
    }
    printf("\n");

    // メモリを解放
    free(arr_malloc);
    free(arr_calloc);

    return 0;
}
/*
gcc malloc_calloc_comparison.c -o malloc_calloc_comparison
./malloc_calloc_comparison
*/
