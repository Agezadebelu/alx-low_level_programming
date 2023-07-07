#!/bin/bash
gcc -Wall -pendantic -Warror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
