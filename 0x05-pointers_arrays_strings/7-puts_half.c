#include "main.h"
#include <string.h>

/**
*puts_half - prints the second half of a string
*@str: string to be printed
*
*Return: void
**/
void puts_half(char *str)
{
	int i;
	int len;
	int start;

	len = strlen(str);
	if ((len % 2) == 0)
		start = len / 2;
	else if ((len % 2) != 0)
	{
		start = ((len - 1) / 2);
		start = start + 1;
	}
	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
i
}

