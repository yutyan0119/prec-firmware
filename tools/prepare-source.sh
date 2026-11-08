#!/usr/bin/env bash
set -euo pipefail

root=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
checkout=${1:?"Usage: bash tools/prepare-source.sh <new-directory>"}
if [[ -e "$checkout" ]]; then
    printf 'Choose a new checkout directory: %s\n' "$checkout" >&2
    exit 1
fi
revision=$(cat "$root/firmware/vial-qmk-revision")
git init "$checkout"
git -C "$checkout" remote add origin https://github.com/vial-kb/vial-qmk.git
git -C "$checkout" fetch --depth=1 origin "$revision"
git -C "$checkout" checkout --detach FETCH_HEAD
[[ $(git -C "$checkout" rev-parse HEAD) == "$revision" ]]
git -C "$checkout" submodule update --init --recursive
git -C "$checkout" apply --check "$root/firmware/patches/cipulot-ec-prec.patch"
git -C "$checkout" apply "$root/firmware/patches/cipulot-ec-prec.patch"
cp -R "$root/firmware/keyboards/prec" "$checkout/keyboards/"
