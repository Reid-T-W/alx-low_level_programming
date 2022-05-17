#include "main.h"

/**
 * main - a super simple shell
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: 0 upon success, 1 upon failure
 */
int main(int __attribute__((unused))ac, char **av)
{
	char **cmds, **argv;
	int status, i, last_return;
	pid_t child_pid;

	if (av[1] != NULL)
	{
		/*	exec_file(av[1]); */
		return (0);
	}
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
				perror("Error: not found");
				continue;
			}
			if (get_builtin(argv[0]) && last_return == 0)
			{
				exec_builtin(argv[0], argv, cmds, &last_return);
				continue;
			}
			child_pid = fork();
			if (child_pid == -1)
				return (print_error());
			if (child_pid == 0)
				exec(argv, &last_return);
			else
				parent(&status, argv, &last_return);
		}
		free_entire_arr(cmds);
	}
	return (0);
}
