#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of all parameters
 *@n: number of parameters
 *Return: 0 upon success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			sum = va_arg(args, int);
		else
			sum = sum + va_arg(args, int);
	}
	return (sum);
}
