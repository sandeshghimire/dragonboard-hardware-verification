#!/bin/sh

rm -f -r infraredTest
aarch64-linux-gnu-gcc -o infraredTest infrared_test.c eva_ir_hw_max610.c