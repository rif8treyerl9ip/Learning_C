# コンパイルフラグの設定
# -std=c11: C11標準を使用
# -g: デバッグ情報を含める
# -static: 静的リンクを行う
CFLAGS=-std=c11 -g -static

# 9ccターゲット: 9cc.cからコンパイラを生成
9cc: 9cc.c

# testターゲット: 9ccをビルドし、テストスクリプトを実行
test: 9cc
		./test.sh

# cleanターゲット: 生成されたファイルを削除
clean:
		rm -f 9cc *.o *~ tmp*

# .PHONYターゲット: test と clean がファイル名ではなくターゲットであることを明示
.PHONY: test clean
