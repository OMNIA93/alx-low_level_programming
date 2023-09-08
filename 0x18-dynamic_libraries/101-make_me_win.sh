#!/bin/bash
wget -P .. https://github.com/OMNIA93/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwinning.so
export LD_PRELOAD="$PWD/../libwinning.so"
