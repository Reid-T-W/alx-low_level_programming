#include "main.h"
/**
 *_strlen_recursion - return the length of a string
 *@s: string
 *
 *Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (length);
	s = s + 1;
	length = 1 + _strlen_recursion(s);
	return (length);
}

