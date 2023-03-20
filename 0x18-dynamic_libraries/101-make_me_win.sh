#!/bin/bash
wget -P .. https://github.com/Pericles001/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD = "$PWD/../nrandom.so"
