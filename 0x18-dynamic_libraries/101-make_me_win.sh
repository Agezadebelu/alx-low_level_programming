#!/bin/bash
wget -P /$PWD https://github.com/Agezadebelu/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=/$PWD/libhack.so
