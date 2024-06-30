#include <stdio.h>

int main() {
  // When using integer type
  int a_int = 10;
  int b_int = 3;
  int result_int = a_int / b_int;
  printf("Result using integer type: %d / %d = %d\n", a_int, b_int, result_int);

  // When using float type
  float a_float = 10.0;
  float b_float = 3.0;
  float result_float = a_float / b_float;
  printf("Result using float type: %.1f / %.1f = %.7f\n", a_float, b_float,
         result_float);

  return 0;
}
