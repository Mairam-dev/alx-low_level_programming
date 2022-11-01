#!/bin/bash
wget -P /tmp https://github.com/Mairam-dev/alx-low_level_programming/blob/master/0x18-dynamic_libraries/injectcode.so
export LD_PRELOAD=/tmp/injectcode.so
