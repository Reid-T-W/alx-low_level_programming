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
	int len;
	int i;
	char temp;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		_putchar(s[len - 1 - i]);
	}
	_putchar('\n');
}

