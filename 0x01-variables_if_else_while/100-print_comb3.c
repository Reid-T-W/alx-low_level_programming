#include <stdio.h>
/**
*main - Entry point
*Return: Always  (Success)
**/
int main(void)
{
	int first;
	int second;

	for (first = 48; first < 57; first++)
		for (second = first + 1; second <= 57; second++)
			if (first != second)
			{
				putchar(first);
				putchar(second);
				if (first != 56 || second != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
	printf("\n");
	return (0);
}
