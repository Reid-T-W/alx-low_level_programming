#include "main.h"

/**
 * exitHandler - handles the exit built-in
 *
 * Return: void
 */
void exitHandler(char **argv, int __attribute__((unused)) *last_return)
{
	if (argv[1] == NULL)
		exit(0);
	if (is_number(argv[1]))
		exit(_atoi(argv[1]));
}
