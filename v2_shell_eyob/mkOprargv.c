#include "main.h"

/**
 * mkOprargv - makes an argv for an operator
 * @str: the operator
 *
 * Return: the newly created argv
 */
char **mkOprargv(char *str)
{
	char **cmd;

	cmd = malloc(sizeof(char *) * 2);
	cmd[0] = _strdup(str);
	cmd[1] = NULL;
	return (cmd);
}
