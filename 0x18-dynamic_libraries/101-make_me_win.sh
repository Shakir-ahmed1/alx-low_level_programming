#!/bin/bash
wget -P .. https://github.com/Shakir-ahmed1/alx-low_level_programming/raw/master/0x18-dynamic_libraries/shaklib.so
export LD_PRELOAD="$PWD/../shaklib.so"
