#include <stdio.h>
/**
*main - Find largest prime factor
*
*
*Return: Always 0
*/
int main(void)
{
	long int num = 612852475143;
	int c = 2;
	int largest = c;

	while (num > 1)
	{
		if (num % c == 0)
		{
			if (c > largest)
				largest = c;
			num = num / c;
		}
		else
			c++;
	}
	printf("%d\n", largest);
	return (0);
}
