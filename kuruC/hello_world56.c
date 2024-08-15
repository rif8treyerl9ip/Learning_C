#include <stdio.h>

int main(void)
{
    int *p;
    int i;
    i = 10;
    p = &i;

    printf("Initial state: i = %d, *p = %d, p = %p\n", i, *p, (void*)p);

    // ポインタを10個分のint型サイズだけ移動
    p = p + 1;


    printf("After moving: i = %d, *p = %d, p = %p\n", i, *p, (void*)p);
    return 0;
}
