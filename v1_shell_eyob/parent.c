#include "main.h"

/**
 * parent - executes the parent's commands
 * @status: the status int for wait function
 * @cmds: the array to be free'd before exiting
 * @last_return: the exit code of the last process
 *
 * Return: void
 */
void parent(int *status, char **cmds, int *last_return)
{
	int exit_status;

	wait(status);
	if (WIFEXITED(*status))
	{
		exit_status = WEXITSTATUS(*status);
		*last_return = exit_status;
		if (exit_status == 97)
		{
			free_entire_arr(cmds);
			exit(exit_status);
		}
	}
}