#include "main.h"

/**
 * parent - executes the parent's commands
 * @status: the status int for wait function
 * @argv: the argv of the current command
 * @last_return: the exit code of the last process
 *
 * Return: void
 */
void parent(int *status, char **argv, int *last_return)
{
	int exit_status;

	wait(status);
	if (WIFEXITED(*status))
	{
		exit_status = WEXITSTATUS(*status);
		*last_return = exit_status;
	}
	free_entire_arr(argv);
}
