#include "main.h"
#include <limits.h>

/**
 * count_s - counts a string
 * @c: the string's first char
 *
 * Return: the count
 */
int count_s(char *c)
{
	int count;

	count = 0;
	while (*(c + count))
		count++;
	return (count);
}

/**
 * _atoi - convert string into number
 * @s: string to be converted
 *
 * Return: number if successful, 0 if not
 */
int _atoi(char *s)
{
	int count, i, sign, sum, pisn, j, digit, first, p;

	count = count_s(s);
	sign = 1;
	sum = 0;
	pisn = 0;
	digit = 0;
	first = 1;
	for (i = 0; i <= count; i++)
	{
		if (*(s + i) < 48 || *(s + i) > 57)
		{
			if (pisn)
				break;
			if (*(s + i) == 45)
				sign = -sign;
		} else
		{
			if (first)
			{
				first = 0;
				j = i;
			}
			pisn = 1;
			digit++;
		}
	}
	p = 1;
	for (i = (j + digit - 1); i >= j; i--)
	{
		if ((*(s + i) - 48) > 1 && (sum >= 147483647))
		{
			if (sign == 1)
				return (INT_MAX);
			return (INT_MIN);
		}
		sum += p * (*(s + i) - 48);
		p = p * 10;
	}
	return (sign * sum);
}
