#!/bin/bash
wget -P .. https://github.com/Shakir-ahmed1/alx-low_level_programming/raw/master/0x18-dynamic_libraries/shaklib.so
LD_PRELOAD="$PWD/../shaklib.so" ./gm 9 8 10 24 75 9
