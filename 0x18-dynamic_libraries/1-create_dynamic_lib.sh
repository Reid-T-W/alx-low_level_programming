#!/bin/bash
for i in *.c
do
	gcc -c "$i" -o "./object_files/${i%.c}.o"
done
gcc ./object_files/*.o -shared -o liball.so

