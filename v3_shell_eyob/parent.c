#include "main.h"

/**
 * parent - executes the parent's commands
 * @status: the status int for wait function
 * @cmds: the array to be free'd before exiting
 * @argv: the argv of the current command
 * @last_return: the exit code of the last process
 *
 * Return: void
 */
void parent(int *status, char **cmds, char **argv, int *last_return)
{
	int exit_status;

	wait(status);
	if (WIFEXITED(*status))
	{
		exit_status = WEXITSTATUS(*status);
		if (_strcmp(argv[0], "exit") == 0 && *last_return == 0)
		{
			if (*last_return)
				return;
			free_entire_arr(argv);
			free_entire_arr(cmds);
			exit(exit_status);
		}
		*last_return = exit_status;
	}
	free_entire_arr(argv);
}
