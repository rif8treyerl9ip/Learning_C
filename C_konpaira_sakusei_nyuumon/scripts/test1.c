int main() {
  return 42;
}

/*

# test1.cをコンパイルしてtest1という実行ファイルを作成
gcc -o test1 test1.c
./test1

echo $?

# test1.cをIntel構文のアセンブリコードにコンパイルし、test2.sとして出力
gcc -S -masm=intel test1.c -o test2.s

# test2.sをコンパイルしてtest2という実行ファイルを作成
gcc -o test2 test2.s
./test2
*/

