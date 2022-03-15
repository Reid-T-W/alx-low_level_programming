#include "main.h"
#include<stdlib.h>
/**
 *_abs - determines the absolute value of a given number
 *@n: The integer that is required to find its absolute value
 *
 *Return: Always success
 **/
int _abs(int n)
{
	if (n > 0)
		_putchar(n);
	else if (n == 0)
		_putchar(n);
	else
	{
		n = abs(n) + 48; 
		_putchar(n);
	}
	return (0);
}
