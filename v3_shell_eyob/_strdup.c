#include "main.h"
#include <stdlib.h>

/**
 * _strdup - dups a string
 * @str: the string to be dup'd
 *
 * Return: pointer to the new string
 */
char *_strdup(const char *str)
{
	int i, size;
	char *arr;

	if (str == NULL)
		return (NULL);

	size = 0;
	i = 0;
	while (str[i])
	{
		size++;
		i++;
		if (str[i] == '\0')
			size++;
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = str[i];
	return (arr);
}
