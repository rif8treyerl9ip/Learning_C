#include <stdio.h>

int main() {
    int a = 10;
    int *p_int = &a;
    int **pp_int = &p_int;

    double b = 3.14;
    double *p_double = &b;

    printf("int value: %d\n", a);
    printf("pointer to int: %d\n", *p_int);
    printf("pointer to pointer to int: %d\n", **pp_int);

    printf("double value: %f\n", b);
    printf("pointer to double: %f\n", *p_double);

    return 0;
}
