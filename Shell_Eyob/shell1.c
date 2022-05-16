#include "main.h"

/**
 * main - a super simple shell
 *
 * Return: 0 upon success, 1 upon failure
 */
int main(void)
{
	char **cmds, *line, *cmd, *full_cmd;
	size_t n;
	ssize_t nread;
	int status, i, currIndex = 0, last_return = 0;
	pid_t child_pid;

	while (1)
	{
		_puts("#cisfun$ ");
		line = NULL;
		n = 0;
		nread = getline(&line, &n, stdin);
		if (nread == -1)
			continue;
		line[nread - 1] = '\0';
		cmds = makeCmds(line);
		free(line);
		for (i = 0; cmds[i]; i++)
		{
			/* Check if command exists */
			cmd = _strtok(cmds[i], " ", &currIndex);
			currIndex = 0;
			if (isOpr(cmd) == 0)
				full_cmd = fetch_cmd(cmd);
			free(cmd);
			if (full_cmd == NULL)
			{
				perror("Error: Command not found");
				continue;
			}
			child_pid = fork();
			if (child_pid == -1)
				return (print_error());
			if (child_pid == 0)
				exec(cmds, i, &last_return);
			else
				parent(&status, cmds, &last_return);
		}
	}
	return (0);
}
