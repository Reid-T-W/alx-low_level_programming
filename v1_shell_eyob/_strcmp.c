#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if strings are the same,
 * another integer if they are not.
 */
int _strcmp(const char *s1, const char *s2)
{
	char c1, c2;
	int i = 0;

	do {
		c1 = (char) s1[i];
		c2 = (char) s2[i++];
		if (c1 == '\0')
			break;
	} while (c1 == c2);
	return (c1 - c2);
}
