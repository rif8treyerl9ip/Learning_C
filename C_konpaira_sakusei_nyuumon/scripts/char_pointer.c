#include <stdio.h>

int main() {
    // 文字列の配列（各要素は文字列へのポインタ）
    char *fruits[] = {
        "Apple",
        "Banana",
        "Orange"
    };

    // 文字の2次元配列（各要素は文字の配列）
    char vegetables[][7] = {
        // "Broccoli",  // 8文字（7文字 + '\0'）warning: initializer-string for array of ‘char’ is too long
        "Carrot",
        "Tomato",
        "Onion"
    };

    // fruits（文字列の配列）の使用
    printf("Fruits:\n");
    for (int i = 0; i < 3; i++) {
        printf("pointer: %p\n", (void *)fruits[i]);  // ポインタの値（アドレス）を出力
        printf("string: %s\n", fruits[i]);           // ポインタが指す文字列の内容を出力
        printf("\n");  // 読みやすさのために各要素の出力の間に空行を追加
        // fruits[i]の最初の文字を変更しようとする（エラーになる）
        // fruits[i][0] = 'X';  // この行はsegmentation fault
    }

    // vegetables（文字の2次元配列）の使用
    printf("\nVegetables:\n");
    for (int i = 0; i < 3; i++) {
        printf("string: %s\n", vegetables[i]);
        printf("pointer: %p\n", (void *)vegetables[i]);
        // vegetables[i]の最初の文字を変更する（可能）
        vegetables[i][0] = 'X';
        printf("Modified: %s\n", vegetables[i]);

        // ポインタ演算を使用して各文字を出力
        printf("Characters: ");
        for (int j = 0; j < 7; j++) {
            printf("%c ", *(vegetables[i] + j));
        }
        printf("\n\n");
    }


    return 0;
}
/*

gcc char_pointer.c -o char_pointer

./char_pointer
*/
