# arduino
Arduino で遊ぶ　　1.8.19　　　MAC　　11.6.7　　（自作　Hacintosh)

タイマー割り込みを使用せず、ｍｉｌｌ関数で時間を取り、ポーリング１０ｍｓとする。
シリアルモニタで見ると、誤差がある。
大体10ｍｓ付近です。
正確な時間制御には向かない。
Serial.println(time);　　
も誤差に影響する。
この関数も通信中は帰らない。
C言語のBIT構造体・共用体を入れる。
簡単な動作を作るなら、手間いらずです

注意：USB接続はUSB2のポートでしか認識しない
![スクリーンショット 2022-07-16 7 23 47](https://user-images.githubusercontent.com/62734282/179319135-6edf28d2-807e-432e-81f7-483905a2c6e5.png)

ESP32 では　ボードマネージャに追記
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

ESP32 Dev Module を選択
![スクリーンショット 2022-07-16 7 24 07](https://user-images.githubusercontent.com/62734282/179319384-a8af0350-722e-4ff8-88b1-7941ffea4f8f.png)

LEDはないので　モニターで時間を見る
![スクリーンショット 2022-07-16 7 34 58](https://user-images.githubusercontent.com/62734282/179320601-8eba8048-86bc-4609-b897-72d7b26667a7.png)

Nanoでは　家のボードが古かったので　　328P(Old..）を選択しました

新しいのではこのエラーがでます

avrdude: stk500_getsync() attempt 1 of 10: not in sync: resp=0x34

シリアルモニタ結果

![スクリーンショット 2022-07-16 8 15 20](https://user-images.githubusercontent.com/62734282/179323681-aed80790-a447-42cb-97be-19ee5870d4e6.png)

誤差大きいです
　
シリアルモニタでの評価は

1位　　ESP32

2位　　Mega256

３位　　Nano

CPU性能通りｊかな

