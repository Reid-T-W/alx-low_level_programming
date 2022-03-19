#include "main.h"

/**
 *print_number - prints integers
 *@n: integer to be printed
 *
 *Return: void
 */
void print_number(int n)
{
	int reserved = 0;
	int original = n;

	if (n < 0)
	{
		n = -1 * n;
	}	
	while (n / 10 != 0)
	{
		reserved = (reserved * 10) + (n % 10);
		n = n / 10;
	}
	reserved = (reserved * 10) + (n % 10);
	if (original < 0)
		_putchar('-');
	while (reserved / 10 != 0)
	{
		_putchar((reserved % 10) + 48);
		reserved = reserved / 10;
	}
	_putchar((reserved % 10) + 48);
}
