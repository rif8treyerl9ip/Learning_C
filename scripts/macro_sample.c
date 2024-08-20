#include <stdio.h>

// PIを3.14159と定義。これにより、プログラム全体で一貫した値を使用できる
#define PI 3.14159

// x * xを計算する関数マクロ。関数呼び出しのオーバーヘッドなしで計算を行える
#define SQUARE(x) ((x) * (x))

// デバッグモードを有効にする。1なので、デバッグ用のコードがコンパイルされる
#define DEBUG 1

int main() {
    // 円の半径を5.0と設定
    float radius = 5.0;

    // 円の面積を計算。PI * r^2の公式を使用。SQUAREマクロで半径を二乗
    float area = PI * SQUARE(radius);

    // 計算結果を小数点以下2桁まで表示
    printf("円の面積: %.2f\n", area);

    // DEBUGが1と定義されているので、この条件分岐内のコードがコンパイルされる
    #if DEBUG
    // デバッグ情報として半径の値を表示
    printf("デバッグモード: 半径 = %.2f\n", radius);
    #endif

    // プログラムが正常に終了したことを示す0を返す
    return 0;
}

/*
gcc -o macro_sample macro_sample.c
./macro_sample

*/
