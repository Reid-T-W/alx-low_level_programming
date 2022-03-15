#include "main.h"
/**
*print_alphabet - prints the alphabet in lower case
*
*Return: Always 0.
**/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
