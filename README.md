# teensy32-sample

Teensy 3.2（Arduino互換機）で開発するサンプルプロジェクト

## 動かし方

1. このリポジトリをクローン

2. 以下のどちらかで[PlatformIO Core (CLI)](https://platformio.org/install/cli)をインストール

    (A) pipenvで仮想環境を有効化（あらかじめ `pip|conda install pipenv` などでpipenvをインストールしてください）

    ```sh
    pipenv install
    pipenv shell
    ```

    (B) グローバルにインストール

    ```sh
    pip install platformio # or `conda install platformio`
    ```

3. プログラムをコンパイル・書き込み

    ```
    platformio run --target upload
    ```
