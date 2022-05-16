#include "main.h"

/**
 * exitHandler - handles the exit built-in
 * @argv: the arument vector of the current command
 * @cmds: the commands
 * @last_return: the exit code of the last command
 *
 * Return: void
 */
void exitHandler(char **argv, char **cmds, int *last_return)
{
	if (*last_return != 0)
		exit(*last_return);
	if (argv[1] == NULL)
		exit(0);
	if (is_number(argv[1]))
		exit(_atoi(argv[1]));
	/* will never execute after this line. Betty workaround */
	free_entire_arr(argv);
	free_entire_arr(cmds);
}
