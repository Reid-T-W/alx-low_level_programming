#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *print_rev - prints the reverse of a string
 *@s: string to be reversed
 *
 *Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	char temp;

	for (i = 0; i < (len / 2); i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	puts(s);
}

