#include "main.h"
/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: parameter
 *
 *Return: void
 **/
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_putchar(*s);
	i = i + 1;
	_puts_recursion(s + i);
}
