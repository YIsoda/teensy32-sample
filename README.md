# teensy32-sample

[PlatformIO](https://platformio.org/) を利用して Teensy 3.2（Arduino 互換機）プロジェクトを開発するサンプルプロジェクト

エディタに依存しない形ですでにあるプログラムの書き込み方法を紹介します。その他の場合（編集したい・新規プロジェクトを作成したい）は公式ドキュメントなどを参照してください。

## エディタに依存しない動かし方

1. このリポジトリをクローン

2. リポジトリのディレクトリで，以下のどちらかの方法を利用して [PlatformIO Core (CLI)](https://platformio.org/install/cli) をインストール

    (A) pipenv で仮想環境を有効化（あらかじめ `pip|conda install pipenv` などで pipenv をインストールしてください）

    ```sh
    pipenv install
    pipenv shell
    ```

    (B) グローバルにインストール

    ```sh
    pip install platformio # or `conda install platformio`
    ```

3. PlatformIO Core のコマンドを利用してプログラムを[コンパイル・書き込み](https://docs.platformio.org/en/latest/quickstart.html#process-project)

    ```
    platformio run --target upload
    ```

## プログラムを編集したい方へ

[PlatformIO IDE](https://platformio.org/platformio-ide) や [Installation · PlatformIO](https://platformio.org/install/ide?install=vscode) を参考にエディタ拡張としての開発環境をインストールするとよいでしょう。
