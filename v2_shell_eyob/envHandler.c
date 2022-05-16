#include "main.h"

/**
 * envHandler - handle the env built-in
 *
 * Return: always 0
 */
void envHandler(char __attribute__((unused)) **argv,
		__attribute__((unused)) int *last_return)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}
	exit(0);
}
