#include "main.h"

/**
 * del_var - removes an environment variable
 * @d_index: the index of the var to be removed
 *
 * Return: void
 */
void del_var(int d_index)
{
	int i, j, env_count = 0;
	char **env_copy;

	for (i = 0; environ[i] != NULL; i++)
		env_count++;
	env_copy = malloc(sizeof(char *) * env_count);
	if (env_copy == NULL)
	{
		perror("Error: unsetenv: failed to malloc");
		return;
	}
	for (i = 0, j = 0; environ[i] != NULL; i++)
	{
		if (i == d_index)
			continue;
		env_copy[j++] = environ[i];
	}
	env_copy[j] = NULL;
	environ = env_copy; /* needs to be free'd */
}
/**
 * unsetenvHandler - delets an environment variable
 * @av: the argument vector of the cmd
 * @cmds: the cmds
 * @l_rt: the exit code of the last cmd
 *
 * Return: void
 */
void unsetenvHandler(char **av, char __attribute__((unused))**cmds, int *l_rt)
{
	char str[10240], *token;
	int i, j, found = 0, d_index, currIndex = 0;

	if (*l_rt != 0)
		return;
	if (av[1] == NULL)
	{
		perror("Error: unsetenv: invalid argument");
		free_entire_arr(av);
		return;
	}
	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; j < 10240; j++)
			str[j] = '\0';
		for (j = 0; environ[i][j] != '\0'; j++)
			str[j] = environ[i][j];
		token = _strtok(str, "=", &currIndex);
		currIndex = 0;
		if (_strcmp(token, av[1]) == 0)
		{
			found = 1;
			d_index = i;
			break;
		}
	}
	if (found == 1)
		del_var(d_index);
	free_entire_arr(av);
}
