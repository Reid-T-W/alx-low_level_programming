#include "main.h"

/**
 * isOpr - checks if part of a string matches
 * one of the special characters &&, ||, ;, or #
 * @s: the start of the check
 *
 * Return: 1 if a match, 0 if not
 */
int isOpr(char *s)
{
	if (!((*s == '&' && *(s + 1) == '&') ||
		(*s == '|' && *(s + 1) == '|') ||
		(*s == ';') ||
		(*s == ' ' && *(s + 1) == '#')))
		return (0);
	return (1);
}
/**
 * count_commands - counts the number of commands in a string
 * @str: the string
 *
 * Return: the wordcount
 */
int count_commands(char *str)
{
	int i = 0, command_count = 0;

	while (str[i])
	{
		if (isOpr(&(str[i])))
		{
			command_count++;
			if (str[i] != ';')
				i++;
			i++;
			continue;
		}
		else
		{
			while (isOpr(&(str[i])) == 0 && str[i])
				i++;
			command_count++;
		}
	}
	return (command_count);
}

/**
 * makeOp - makes an operator string
 * @s: the string to be dup'd
 *
 * Return: a pointer to the dup'd string
 */
char *makeOp(char *s)
{
	int i, size;
	char *op;

	if (*s == ';')
		size = 1;
	else
		size = 2;
	op = malloc(sizeof(char) * (size + 1));
	if (op == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		op[i] = s[i];
	op[size] = '\0';
	return (op);
}

/**
 * makeCmd - makes a command string
 * @s: the string to be dup'd
 *
 * Return: a pointer to the dup'd string
 */
char *makeCmd(char *s)
{
	int i = 0, letter_count = 0;
	char *str;

	while (isOpr(&(s[i])) == 0 && s[i])
	{
		i++;
		letter_count++;
	}
	str = malloc(sizeof(char) * (letter_count + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < letter_count; i++)
		str[i] = s[i];
	str[letter_count] = '\0';
	return (str);
}

/**
 * makeCmds - splits a string into commands
 * @str: the string
 *
 * Return: an array of the commands
 */
char **makeCmds(char *str)
{
	char **cmd;
	int i, j = 0, cmd_count;

	if (str == NULL)
		return (NULL);
	cmd_count = count_commands(str);
	cmd = malloc(sizeof(char *) * (cmd_count + 1));
	if (cmd == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (isOpr(&(str[i])))
			cmd[j] = makeOp(&(str[i]));
		else
			cmd[j] = makeCmd(&(str[i]));
		if (cmd[j] == NULL)
			return (free_array(cmd, j - 1));
		i += _strlen(cmd[j]);
		j++;
	}
	cmd[j] = NULL;
	return (cmd);
}
