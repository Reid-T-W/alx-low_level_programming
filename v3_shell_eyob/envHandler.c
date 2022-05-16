#include "main.h"

/**
 * envHandler - handle the env built-in
 * @argv: the argument vector
 * @cmds: the commands
 * @last_return: the exit code of the last process
 *
 * Return: always 0
 */
void envHandler(char **argv, char **cmds, int *last_return)
{
	int i, status;

	status = *last_return;
	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}
	status = 0;
	free_entire_arr(argv);
	free_entire_arr(cmds);
	exit(status);
}
