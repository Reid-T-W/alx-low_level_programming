#include "main.h"

/**
 * main - a super simple shell
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: 0 upon success, 1 upon failure
 */
int main(int ac, char **av)
{
	char **cmds;

	if (av[1] != NULL)
		exec_file(ac, av);
	while (1)
	{
		cmds = get_input();
		exec_cmds(cmds);
		free_entire_arr(cmds);
	}
	return (0);
}
