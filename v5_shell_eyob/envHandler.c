#include "main.h"

/**
 * envHandler - handle the env built-in
 * @av: the argument vector
 * @cmds: the commands
 * @last_ret: the exit code of the last process
 *
 * Return: always 0
 */
void envHandler(char **av, char __attribute__((unused)) **cmds, int *last_ret)
{
	int i, status;

	status = *last_ret;
	for (i = 0; environ[i] != NULL; i++)
	{
		_puts(environ[i]);
		_putchar('\n');
	}
	status = 0;
	free_entire_arr(av);
	*last_ret = status;
}
