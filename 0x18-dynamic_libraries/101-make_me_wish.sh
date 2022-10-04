#!/bin/bash
wget -P /tmp/ https://raw.github.com/KitwanaSh/alx-low_level_programming/master/0x18-dynamic_libraries/hazard.so
export LD_PRELOAD =/tmp/hazard.so
