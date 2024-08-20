from distutils.core import setup, Extension

# 拡張モジュールを定義
# 'example'は作成するモジュールの名前
# sources=['example.c']は、コンパイルする元のCソースファイル
module = Extension('example', sources=['src/example.c'])

# setupを使用してパッケージの情報を設定
setup(
    name='example',
    version='1.0',
    description='This is a demo package',
    ext_modules=[module]     # ビルドする拡張モジュールのリスト
)
