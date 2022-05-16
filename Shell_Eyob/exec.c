#include "main.h"

/**
 * exec - executes a command
 * @cmds: the commands vector
 * @i: the index where the command to
 * be executed resides
 * @last_return: the exit code of the last process
 *
 * Return: void
 */
void exec(char **cmds, int i, int *last_return)
{
	char **argv, *temp;

	argv = mkargv(cmds[i]);
	if (argv == NULL)
		return;
	if (isOpr(argv[0]))
	{
		if (_strcmp(argv[0], "||") == 0)
		{
			if (*last_return != 0)
				*last_return = 0;
			else
				*last_return = 1;
		}
		if (_strcmp(argv[0], ";") == 0)
			*last_return = 0;
		free_entire_arr(argv);
		return;
	}
	if (_strcmp(argv[0], "exit") == 0)
	{
		free_entire_arr(argv);
		free_entire_arr(cmds);
		exit(97);
	}
	if (*last_return != 0)
	{
		*last_return = 0;
		return;
	}
	temp = argv[0];
	argv[0] = fetch_cmd(argv[0]);
	free(temp);
	if (execve(argv[0], argv, NULL) == -1)
		perror("Execve Error:");
	free_entire_arr(argv);
}
