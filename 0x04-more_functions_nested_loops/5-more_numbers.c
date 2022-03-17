#include "main.h"

/**
 *more_numbers - prints numbers 0 to 14 ten times
 *
 *
 *Return: void
 */
void more_numbers(void)
{
	int iteration;
	int n;

	for (iteration = 0; iteration <= 10; iteration++)
	{
		for (n = 0; n <= 14; n++)
			if (n <= 9)
				putchar(n + 48);
			else
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
			}
	putchar('\n');
	}
}
