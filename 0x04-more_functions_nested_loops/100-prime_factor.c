#include "main.h"
#include <stdio.h>

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
