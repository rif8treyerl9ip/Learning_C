#include <stdio.h>
#include <stdlib.h>

int main() {
    // Regular integer variable
    int number = 199;
    printf("1. Regular integer variable:\n");
    printf("   Value of number: %d\n", number);
    printf("   Address of number: %p\n\n", (void*)&number);
    printf("Address: %p\n", &number);           // 警告が出る可能性あり
    printf("Address: %p\n", (void*)&number);    // 警告が出ない

    int *pnumber;
    printf("2. Integer pointer before initialization:\n");
    printf("   Value of pnumber (address): %p\n\n", (void*)pnumber);
    pnumber = &number;
    printf("3. Integer pointer after assigning number's address:\n");
    printf("   Value of pnumber (address): %p\n", (void*)pnumber);
    printf("   Value pointed to by pnumber: %d\n\n", *pnumber);






    return 0;
}
