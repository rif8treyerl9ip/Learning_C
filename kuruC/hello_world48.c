#include <stdio.h>

int main(void)
{
   // int型変数には4バイトずつずれた連続したアドレスが割り当てられる
   // これは、多くのシステムでint型のサイズが4バイトであるため
    int i1, i2, i3;
    printf("i1(%p)\n", &i1);
    printf("i2(%p)\n", &i2);
    printf("i3(%p)\n", &i3);
    int array[10];
    printf("array___(%p)\n", array);
    printf("array[0](%p)\n", &array[0]);
    printf("array[1](%p)\n", &array[1]);
    printf("array[2](%p)\n", &array[2]);
    return 0;}
