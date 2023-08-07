#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -Wno-unused-parameter -Wno-unused-result -c *.c
ar -rc liball.a *.o
ranlib liball.a
