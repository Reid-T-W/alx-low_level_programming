#include "main.h"

/**
 * cat - concatenates the name and value of
 * an environment variable
 * @new: the new concat'd string
 * @name: the name
 * @value: the value
 *
 * Return: void
 */
void cat(char **new, char **name, char **value)
{
	int j, k;

	*new = malloc(sizeof(char) * (_strlen(*name) + _strlen(*value) + 2));
	if (new == NULL)
		return;
	for (j = 0; (*name)[j] != '\0'; j++)
		(*new)[j] = (*name)[j];
	(*new)[j++] = '=';
	for (k = 0; (*value)[k] != '\0'; k++)
		(*new)[j++] = (*value)[k];
	(*new)[j] = '\0';
}

/**
 * create_var - executed when variable is not found
 * @av: the argument vector of the command
 * @new: the new entry
 *
 * Return: void
 */
void create_var(char **av, char *new)
{
	int i, env_count = 0;
	char **env_copy;

	for (i = 0; environ[i] != NULL; i++)
		env_count++;
	env_copy = malloc(sizeof(char *) * (env_count + 2));
	if (env_copy == NULL)
	{
		perror("Error: setenv: failed to malloc");
		free_entire_arr(av);
		return;
	}
	for (i = 0; environ[i] != NULL; i++)
		env_copy[i] = environ[i];
	cat(&new, &(av[1]), &(av[2]));
	env_copy[i++] = new; /* needs to be free'd */
	env_copy[i] = NULL;
	environ = env_copy; /* needs to be free'd */
}
/**
 * setenvHandler - changes or adds an environment variable
 * @av: the argument vector of the command
 * @cmds: the commands
 * @lst_ret: the exit code of the last process
 *
 * Return: void
 */
void setenvHandler(char **av, char __attribute__((unused))**cmds, int *lst_ret)
{
	char str[10240], *token, *new;
	int i, j, found = 0, currIndex = 0;

	if (*lst_ret != 0)
		return;
	if (av[1] == NULL || av[2] == NULL)
	{
		perror("Errpr: setenv: Invalid arguments");
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
			cat(&new, &(av[1]), &(av[2]));
			environ[i] = new; /* needs to be free'd */
			break;
		}
	}
	if (found == 0)
		create_var(av, new);
	free_entire_arr(av);
}
