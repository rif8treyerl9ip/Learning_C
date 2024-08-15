#include <stdio.h>

int main(void)
{
    int *p;
    int i;
    // i=10;
    p = &i;
    *p=10;

    int j;
    j=20;

    // 間接参照演算子を使った積
    printf("%d", *p*j);

    return 0;
}
