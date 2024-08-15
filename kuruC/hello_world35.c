#include <stdio.h>

int main(void)
{
   // 100個の整数を格納できる配列を宣言
   // この時点で配列の要素は未初期化（不定値）
   int array[100];

   // 配列の10番目の要素（インデックス9）に100を代入
   // C言語の配列は0から始まるため、インデックス9は10番目の要素
   array[9] = 100;

   printf("1:%d\n", array[9]);

   // 配列の10番目の要素（インデックス9）の値を1増加
   // インクリメント演算子 ++ を使用
   array[9]++;

   printf("2:%d\n", array[9]);

    // 初期化された要素と初期化されていない要素を出力
    printf("array[9] (initialized): %d\n", array[9]);
    printf("array[5] (uninitialized): %d\n", array[5]);
    printf("array[10] (uninitialized): %d\n", array[10]);
   return 0;
}
