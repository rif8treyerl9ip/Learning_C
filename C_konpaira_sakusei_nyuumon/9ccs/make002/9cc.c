#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
 // コマンドライン引数が1つであることを確認
 if (argc != 2) {
   fprintf(stderr, "引数の個数が正しくありません\n");
   return 1;
 }

 // 入力文字列のポインタ
 char *p = argv[1];

 // アセンブリコードの出力開始
 printf(".intel_syntax noprefix\n");
 printf(".globl main\n");
 printf("main:\n");
 // 最初の数値をRAXレジスタにセット
 printf("  mov rax, %ld\n", strtol(p, &p, 10));

 // 入力文字列を順に処理
 while (*p) {
   if (*p == '+') {
     // '+'の場合、次の数値をRAXに加算
     p++;
     printf("  add rax, %ld\n", strtol(p, &p, 10));
     continue;
   }

   if (*p == '-') {
     // '-'の場合、次の数値をRAXから減算
     p++;
     printf("  sub rax, %ld\n", strtol(p, &p, 10));
     continue;
   }

   // '+' や '-' 以外の文字が現れたらエラー
   fprintf(stderr, "予期しない文字です: '%c'\n", *p);
   return 1;
 }

 // アセンブリコードの終了
 printf("  ret\n");
 return 0;
}

/*

make
./9cc '5+20-4'

 */
