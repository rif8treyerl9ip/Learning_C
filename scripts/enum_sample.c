#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    for (enum Day day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d ", day);
    }
    printf("\n");
    return 0;
}

/*

gcc -o enum_sample enum_sample.c
./enum_sample

*/
