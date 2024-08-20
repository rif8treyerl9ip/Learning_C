#include <stdarg.h>  // 可変引数を扱うためのヘッダーファイルをインクルード
#include <stdio.h>   // 標準入出力関数を使用するためのヘッダーファイルをインクルード

// 可変個数の整数の平均値を計算する関数
// count: 引数の数, ...: 可変個数の整数引数
double average(int count, ...) {
    va_list args;    // 可変引数にアクセスするための va_list 型変数を宣言
    double sum = 0;  // 合計値を格納する変数を初期化

    // これにより、va_arg マクロを使って順番に引数を取り出せるようになります
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        int value = va_arg(args, int);
        printf("引数 %d: %d\n", i + 1, value);  // 各引数の値をプリント
        sum += value;    }
    va_end(args);  // 可変引数へのアクセスを終了

    return sum / count;  // 平均値を計算して返す
}

int main() {
    // average 関数を呼び出し、結果を小数点以下2桁まで表示
    // 4つの引数 (2, 4, 6, 8) の平均を計算
    printf("Average: %.2f\n", average(4, 2, 4, 6, 8));

    // 3つの引数 (1, 3, 5) の平均を計算
    printf("Average: %.2f\n", average(3, 1, 3, 5));

    return 0;  // プログラムの正常終了
}
/*
gcc -o va_arg_test va_arg_test.c
./va_arg_test
*/
