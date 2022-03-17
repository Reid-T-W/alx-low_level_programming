#include "main.h"

/**
*print_diagonal - Prints a diagonal line
*@n: Length of the line
*
*Return: void
*/
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
