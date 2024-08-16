#include <string.h>
#include <stdio.h>

struct Person {
    char name[50];  // 50バイト
    int age;        // 4バイト（通常のシステムの場合）
    float height;   // 4バイト（通常のシステムの場合）
};

int main() {
    struct Person person1;  // 合計58バイトのメモリが割り当てられる

    // person1のメンバに値を代入
    strcpy(person1.name, "田中太郎");
    person1.age = 30;
    person1.height = 170.5;

    printf("int型のサイズ: %luバイト\n", sizeof(person1.age));
    printf("float型のサイズ: %luバイト\n", sizeof(person1.height));

    // person1の情報を表示
    printf("名前: %s\n", person1.name);
    printf("年齢: %d歳\n", person1.age);
    printf("身長: %.1fcm\n", person1.height);

    return 0;
}

/*
gcc person_struct.c -o person_struct
./person_struct
*/
