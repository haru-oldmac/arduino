# arduino
Arduino で遊ぶ

タイマー割り込みを使用せず、ｍｉｌｌ関数で時間を取り、ポーリング１０ｍｓとする
シリアルモニタで見ると、誤差がある。大体10ｍｓ付近です。
正確な時間制御には向かない

C言語のBIT構造体・共用体を入れる。

Serial.println(time);も誤差に影響する。
この関数も通信中は帰らない。

簡単な動作を作るなら、手間いらずです

注意：USB接続はUSB2のポートでしか認識しない

![スクリーンショット 2022-07-16 7 23 47](https://user-images.githubusercontent.com/62734282/179319135-6edf28d2-807e-432e-81f7-483905a2c6e5.png)

ESP32 では　ボードマネージャに追記
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
![スクリーンショット 2022-07-16 7 24 07](https://user-images.githubusercontent.com/62734282/179319384-a8af0350-722e-4ff8-88b1-7941ffea4f8f.png)
ESP32 Dev Module を選択
LEDはないので　モニターでじかんを見る
![スクリーンショット 2022-07-16 7 34 58](https://user-images.githubusercontent.com/62734282/179320601-8eba8048-86bc-4609-b897-72d7b26667a7.png)
