#include "main.h"

/**
*print_line - Print a straight line
*@n: Length of the line
*
*Return: void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
