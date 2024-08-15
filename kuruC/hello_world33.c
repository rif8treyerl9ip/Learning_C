#include <stdio.h>
#include <stddef.h>  // size_t型の定義を含むヘッダーファイル
#include <stdint.h>  // SIZE_MAXマクロの定義を含むヘッダーファイル

int main() {
    // size_t型の変数を宣言し、sizeof(int)の結果を格納
    // size_tは符号なし整数型で、オブジェクトのサイズを表すのに適している
    // 32ビットシステムでは通常32ビット、64ビットシステムでは64ビット
    size_t size_of_int = sizeof(int);

    // size_of_intの値を出力
    // %zuはsize_t型の値を出力するための正しいフォーマット指定子
    printf("Size of int: %zu bytes\n", size_of_int);

    // size_tの最大値を出力
    // SIZE_MAXはsize_t型で表現できる最大値を表す定数
    // stdint.hヘッダーファイルで定義されている
    printf("Maximum value of size_t: %zu\n", SIZE_MAX);

    return 0;
}
