#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The integer to be evaluated
 *
 * Return: If positive returns 1
 * if negative returns -1, and if zero it returns 0
 **/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
}
