#!/bin/bash
<<<<<<< HEAD
gcc -c -fPIC *.c
=======
gcc -fPIC -c *.c
>>>>>>> 98b2f646e1fdbf6d4729ddcbddc27c65a9d063d9
gcc -shared -o liball.so *.o
