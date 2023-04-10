#!/bin/bash

# a script that creates a static library
# called liball.a from all the .c files

gcc -c *.c
ar rc liball.a *.o
