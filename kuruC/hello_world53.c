#include <stdio.h>
#include <stddef.h>
int main() {
    int *p = NULL;
    // printf("p eq %d", p);
    printf("p eq %p\n", (void*)p);

    if (p==0) {
        printf("xxx");
    }

    return 0;
}
