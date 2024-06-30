#include <stdio.h>

int main(void) {
  int left;
  int right;
  left = 10;
  right = 10;
  printf("%d\n", left + right);
  printf("%d\n", left - right);
  printf("%d\n", left * right);
  printf("%d\n", left / right);
  printf("%d\n", left % right);

  int value;
  value = 10 + 30;
  printf("%d\n", value);
  int value2;
  value2 = 10;
  value2 += 30;
  printf("%d\n", value2);
  int value3;
  value3 = 10;
  printf("%d\n", value3);
  value3++;
  printf("%d\n", value3);
  value3--;
  printf("%d\n", value3);
  int a = 10000, b = 500, c = 3, d = -2;
  printf("A: %5d \n", a);
  printf("B: %5d \n", b);
  printf("C: %5d \n", c);
  printf("D: %5d \n", d);
  int e = 10000, f = 500, g = 3;
  printf("E: %05d \n", e);
  printf("F: %05d \n", f);
  printf("G: %05d \n", g);
  double h = 1.23456789;
  printf("%6.2f\n", h);
  double i = 1.23456789;  // 四捨五入
  printf("%8.6f\n", i);
  return 0;
}
