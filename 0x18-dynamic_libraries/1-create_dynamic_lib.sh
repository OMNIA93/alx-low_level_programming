#!/bin/bash
ls *.c | grep -v "0-main.c" | xargs gcc -fPIC -c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
