#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
*_memset - funtion that fills n bytes of the memory area
*@s: pointer
*@b: constant byte
*@n: first n bytes
*
*Return: returns a pointer
*/
char *_memset(char *s, char b, unsigned int n);
#endif /* MAIN_H */
