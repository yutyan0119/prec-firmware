# PREC

EC keyboard firmware for the PREC PCB (STM32F072 + dual 74HC4051 analog multiplexers).

## Building

Make example for this keyboard (after setting up your build environment):

    make prec:default

Flashing example for this keyboard:

    make prec:default:flash

## Entering the bootloader

Use one of the following methods:

1. Press the physical reset button while holding BOOT.
2. Unplug, hold BOOT, then plug in the USB cable.
3. Run `QK_BOOT` from your keymap if enabled.
