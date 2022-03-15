#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The integer to be evaluated
 *
 * Return: If positive returns 1
 * if negative returns -1, and if zero it returns 0
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
