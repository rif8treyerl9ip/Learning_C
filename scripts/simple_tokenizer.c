#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// 入力文字列 静的グローバル変数として input を定義
static char *input;

// エラーを報告する関数
void error(char *fmt, ...) {
    fprintf(stderr, "Error: %s\n", fmt);
    exit(1);
}

// 次のトークンを構文解析してそのトークンを返す
void tokenize() {
    while (*input) {
        // 空白文字をスキップ
        if (isspace(*input)) {
            input++;
            continue;
        }

        // 数値の場合
        if (isdigit(*input)) {
            int val = strtol(input, &input, 10);
            printf("NUMBER: %d\n", val);
            continue;
        }

        // 記号の場合
        if (*input == '+' || *input == '-') {
            printf("RESERVED: %c\n", *input);
            input++;
            continue;
        }

        error("トークナイズできません");
    }

    printf("EOF\n");
}

int main() {
    char buffer[1024];
    printf("式を入力してください：");
    fgets(buffer, sizeof(buffer), stdin);
    printf("処理される入力1: \"%s\"\n", buffer);

    buffer[strcspn(buffer, "\n")] = 0;  // 改行文字を削除
    input = buffer;
    printf("処理される入力2: \"%s\"\n", input);
    printf("入力の長さ: %zu\n", strlen(input));

    tokenize();

    return 0;
}

/*
gcc -o simple_tokenizer simple_tokenizer.c
./simple_tokenizer

*/
