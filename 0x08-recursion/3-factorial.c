#include "main.h"
/**
 *factorial - calculates the factorial of a number using recursion
 *@n: the number
 *
 *Return: the factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
