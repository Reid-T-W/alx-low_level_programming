#!/bin/bash
for i in *.c
do
	gcc -c "$i" -o "./object_files/${i%.c}.o"
done
for j in ./object_files/*.o
do
	ar rc liball.a "$j"
done	
