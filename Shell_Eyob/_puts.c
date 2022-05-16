#include "main.h"

/**
 * _puts - prints a string recursively
 * @str: pointer to the first char in the string
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str == NULL || *str == '\0')
		return;
	_putchar(*str);
	_puts(str + 1);
}
