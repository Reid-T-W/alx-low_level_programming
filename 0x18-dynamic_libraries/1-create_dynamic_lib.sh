#!/bin/bash
for i in *.c
do
	gcc "$i" -c -fPIC -o "./object_files/${i%.c}.o"
done
gcc ./object_files/*.o -shared -o liball.so

