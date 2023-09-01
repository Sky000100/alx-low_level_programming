#!/bin/bash
source_files=$(find . -maxdepth 1 -type -name "*.c")
gcc -c $source_files
ar rcs liball.a *.o
rm -f *.o

