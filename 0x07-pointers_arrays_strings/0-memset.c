#include "main.h"

/**
*_memset - funtion that fills n bytes of the memory area
*@s: pointer
*@b: constant byte
*@n: first n bytes
*
*Return: returns a pointer
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s = s + 1;
		*s = b;
	}
	return (s);
}
