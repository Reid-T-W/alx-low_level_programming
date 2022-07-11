#!/bin/bash
for i in ./*.c
do
	gcc "$i" -c -fPIC
done
gcc ./*.o -shared -o liball.so

