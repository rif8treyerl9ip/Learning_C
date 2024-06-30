#include <stdio.h>

int main(void) {
  int suuti = 10;
  if (suuti) printf("%d\n", suuti);

  int suuti2 = 11;
  if (suuti2 - 10) printf("%d\n", suuti2);

  const char* suuti3 = "hoge";
  if (suuti3) printf(suuti3);

  int suuti4 = 10;
  if (suuti4 == 10) printf("\n10\n");

  int val1 = 5;  // 比較する値1
  int val2 = 5;  // 比較する値2
  int answer1;   // 結果を格納する変数
  int answer2;   // 結果を格納する変数
  answer1 = (val1 == val2);
  answer2 = val1 == val2;
  printf("val1 == val2: %d\n", answer1);
  printf("val1 == val2: %d\n", answer2);

  int suuti7;
  suuti7 = 9;
  if (suuti7 >= 8 && suuti7 <= 12) printf("8~12 \n");
  if (!(suuti7 >= 8 && suuti7 <= 12)) printf("not 8~12 \n");
  int suuti8;
  suuti8 = 9;
  if (suuti8 >= 8 || suuti8 <= 12) printf("8~12 \n");

  return 0;
}
