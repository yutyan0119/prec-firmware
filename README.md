# PREC

有線の静電容量無接点キーボード **PREC**（STM32F072）用のVial対応ファームウェアと組み立てガイドです。

- [組み立て・書き込み・校正](docs/assembly.md)
- [GitHub Actionsのビルド](https://github.com/yutyan0119/prec-firmware/actions/workflows/build.yml)

GitHubにログインし、成功した実行の **Artifacts → prec-vial** をダウンロードすると `prec_vial.bin` が手に入ります。ZIP内の `SOURCE.txt` に、そのファイルをビルドしたソースの版があります。

## ソースからビルドする

LinuxまたはWSLで[Vialのビルド環境](https://get.vial.today/docs/porting-to-vial.html)を用意して、リポジトリのルートで実行します。

```bash
bash tools/prepare-source.sh .build/vial-qmk
make -C .build/vial-qmk -j2 prec:vial
```

初回の準備で、固定したVial-QMKとそのサブモジュールを取得し、[PRECの定義](firmware/keyboards/prec/)と[共通ECコードへの差分](firmware/patches/cipulot-ec-prec.patch)を適用します。ビルド結果は `.build/vial-qmk/prec_vial.bin` です。再ビルドは `make` から実行できます。既定キーマップの編集先は `firmware/keyboards/prec/keymaps/vial/keymap.c` です。編集したら展開済みのVial-QMKにも反映するか、新しいディレクトリに準備し直してください。

## ライセンス

PRECのファームウェアソースと差分は [GPL-3.0-or-later](LICENSE) です。Vial-QMK本体とサブモジュールはそれぞれのライセンスが適用されます。[出典と差分の説明](THIRD_PARTY.md)を参照してください。
