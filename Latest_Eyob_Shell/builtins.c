#include "main.h"

/**
 * get_builtin - finds the built-in command
 * @s: the name of the command
 *
 * Return: a pointer the handler function
 */
void (*get_builtin(char *s))(char **argv, int *last_return)
{
	builtin_t builtins[] = {
		{"exit", exitHandler},
		{"env", envHandler},
		{NULL, NULL}
	};
	int i = 0;

	while(builtins[i].cmd)
	{
		if (_strcmp(s, builtins[i].cmd) == 0)
			return (builtins[i].handler);
		i++;
	}
	return (NULL);
}

/**
 * exec_builtin - gets and executes the built-in
 * @s: the name of the built-in
 * @argv: the argument vector
 * @last_return: the exit code of the last process
 *
 * Return: void
 */
void exec_builtin(char *s, char **argv, int *last_return)
{
	void (*handler)(char **, int *) = get_builtin(s);

	if (handler)
		handler(argv, last_return);
}
