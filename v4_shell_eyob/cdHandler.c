#include "main.h"

/**
 *updateEnv - prepares arguments for the setenvHandler and calls it
 *@key: env key to update
 *@cmds: commands to be passed to setenvHandler
 *@lst_ret: last return value to be passed to setenvHandler
 *Return: void
 */
void updateEnv(char *key, char __attribute__((unused))**cmds, int *lst_ret)
{
	char *currentDir;
	char **setenv_args;
	char *buf;
	size_t len = 1000;

	buf = malloc(1000);
	setenv_args = malloc(100);
	currentDir = getcwd(buf, len);
	setenv_args[0] = NULL;
	setenv_args[1] = key;
	setenv_args[2] = currentDir;
	setenv_args[3] = NULL;
	setenvHandler(setenv_args, cmds, lst_ret);
	free(buf);
}




/**
 *cdHandler - changes the current working directory
 *@av: arguments
 *@cmds: list of commands entered by the user
 *@lst_ret: status of last run command
 *Return: void
 */
void cdHandler(char **av, char __attribute__((unused))**cmds, int *lst_ret)
{
	if (*lst_ret != 0)
	{
		return;
	}
	updateEnv("OLDPWD", cmds, lst_ret);
	if ((_strcmp(av[0], "cd") == 0) && av[1] == NULL)
	{
		if (chdir("/") == 0)
		{
			updateEnv("PWD", cmds, lst_ret);
			free_entire_arr(av);
			return;
		}
	}
	if (chdir(av[1]) == 0)
	{
		updateEnv("PWD", cmds, lst_ret);
		free_entire_arr(av);
		return;
	}
	else
	{
		perror("Error");
	}
	free_entire_arr(av);
}
