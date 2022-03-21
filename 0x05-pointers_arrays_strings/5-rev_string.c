#include "main.h"
#include <string.h>

/**
 *rev_string - reverse string
 *@s: string to be reversed
 *
 *Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;
	char temp;

	len = strlen(s);
	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

