# ファームウェアの出典

- **Vial-QMK** — [固定した上流ソース](https://github.com/vial-kb/vial-qmk/tree/753614a076894b4e8207677182910929beb09f49)。上流のGPL等のライセンスと著作権表示は取得したソースに残ります。サブモジュールのリポジトリは上流の `.gitmodules`、版は上流コミットのgitlinkで固定されています。
- **Cipulotの共通ECコード** — 上流の [`keyboards/cipulot/common`](https://github.com/vial-kb/vial-qmk/tree/753614a076894b4e8207677182910929beb09f49/keyboards/cipulot/common) を使用します。差分の対象である `ec_board.c` と `via_ec.c` は Copyright 2023 Cipulot、GPL-3.0-or-laterです。差分にはEEPROM設定の検証、APCの既定しきい値の適用、Vialの校正・保存操作への対応が含まれます。

配布バイナリーに対応するソースを取得するには、成果物の `SOURCE.txt` に記載したこのリポジトリのコミットを開き、その版の `tools/prepare-source.sh` を実行してください。上流の完全なソースとサブモジュール、差分を適用した状態が得られます。
