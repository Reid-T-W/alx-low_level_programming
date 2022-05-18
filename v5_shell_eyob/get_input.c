#include "main.h"

/**
 * get_input - gets input and turns it into cmds
 *
 * Return: a char pointer of the commands
 */
char **get_input(void)
{
	char **cmds, line[BUFSZ] = {0};
	ssize_t nread = 0;

	_puts("#cisfun$ ");
	nread = _getline(line, BUFSZ);
	if (nread == -1)
		exit(0);	/* EOF (Ctrl+D) captured */
	cmds = makeCmds(line);
	if (cmds == NULL)
	{
		perror("Error: failed to create commands");
		get_input();
	}
	return (cmds);
}
