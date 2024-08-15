#include <stdio.h>

int main(void)
{
    int x = 10;               // 整数型の変数xを宣言し、10を代入
    int *ptr = &x;            // ptrというポインタにxのアドレスを代入
    printf("%d\n", *ptr);     // ポインタptrが指す値（xの値）を表示
    printf("%p\n", (void *)ptr); // ポインタptrのメモリアドレスを表示
}
