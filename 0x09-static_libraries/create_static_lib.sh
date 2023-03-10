#!bin/bash
gcc -Wall -Wextra -Werror -pedatic -c *.c
ar rc liball.a *.o
