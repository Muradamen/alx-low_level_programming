#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fpic ./*.c
gcc -shared -o liball.so ./*.o

