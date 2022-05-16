#include "main.h"

/**
 * main - a super simple shell
 *
 * Return: 0 upon success, 1 upon failure
 */
int main(void)
{
	char **cmds, **argv;
	int status, i, last_return;
	pid_t child_pid;

	while (1)
	{
		cmds = input(&last_return);
		for (i = 0; cmds[i]; i++)
		{
			if (last_return == 99)	/* " #" detected in previous cmd */
				break;
			argv = mkargv(cmds[i]);
			if (argv == NULL)
				continue;
			if (isOpr(argv[0]) != 1 && cmd_exists(argv[0]) != 1)
			{
				perror("Error: Command not found");
				continue;
			}
			child_pid = fork();
			if (child_pid == -1)
				return (print_error());
			if (child_pid == 0)
				exec(argv, cmds, &last_return);
			else
				parent(&status, cmds, argv, &last_return);
		}
		free_entire_arr(cmds);
	}
	return (0);
}
