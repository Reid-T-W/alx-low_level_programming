#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse
*@s: string to be printed in reverse
*
*Return: void
*/
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	i = i + 1;
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + i);
	_putchar(*s);
}
