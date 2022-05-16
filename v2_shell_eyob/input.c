#include "main.h"

/**
 * input - processes input
 * @last_return: the return code of the last process
 *
 * Return: a char pointer of commands
 */
char **input(int *last_return)
{
	char *line, **cmds;
	size_t n;
	ssize_t nread;

	*last_return = 0;
	_puts("#cisfun$ ");
	line = NULL;
	n = 0;
	nread = getline(&line, &n, stdin);
	if (nread == -1)
	{
		perror("Error: failed to read line");
		input(last_return);	/* Rerun */
	}
	line[nread - 1] = '\0';
	cmds = makeCmds(line);
	if (cmds == NULL)
	{
		perror("Error: failed to create commands");
		free(line);
		input(last_return);
	}
	free(line);
	return (cmds);
}
