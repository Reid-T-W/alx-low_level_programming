#!/bin/bash
for i in *.c
do
	gcc "$i" -c -fPIC
done
gcc ./object_files/*.o -shared -o liball.so

