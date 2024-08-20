#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void error(char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vfprintf(stderr, fmt, ap);
  fprintf(stderr, "\n"); // 標準エラー出力（stderr）は通常、行バッファリングモードなので、この\nが必要
  exit(1);
}

int main() {
  error("テストエラー: %d", 42);
  return 0;
}

/*
gcc -o va_error_test va_error_test.c
./va_error_test
*/
