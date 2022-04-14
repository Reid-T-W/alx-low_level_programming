#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - variadic functions that prints strings
 *@separator: string to be printed between numbers
 *@n:number of integers
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *string;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);
		if (separator != NULL && string != NULL)
		{
			if (i == n - 1)
				printf("%s", string);
			else
				printf("%s%s", string, separator);
		}
		else if (separator == NULL && string != NULL)
		{
			printf("%s", string);
		}
		else if (separator != NULL && string == NULL)
		{
			string = "(nil)";
			if (i == n - 1)
				printf("%s", string);
			else
				printf("%s%s", string, separator);
		}
	}
	printf("\n");
}
