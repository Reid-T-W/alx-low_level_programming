#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: first character of the string whose length is to be counted
 *
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
