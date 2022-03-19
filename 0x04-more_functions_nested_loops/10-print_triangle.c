#include "main.h"
/**
*print_triangle - prints a traingle
*@size: size of the traingle
*
*return: void
**/
void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (space = 0; space < size - (i + 1); space++)
				_putchar(' ');
			for (hash = 0; hash < i + 1; hash++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
