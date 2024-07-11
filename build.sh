#!/bin/bash

#script to compile detecVM.c

SRC="detecVM.c"
OUT="detecVM"

#compile
gcc -o $out $SRC

if [$? -eq 0]; then
    echo "Compilation successful"
else
    echo "Compilation failed"