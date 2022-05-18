#include <stdio.h>
#include <stdlib.h>

/**
 * _strtok - a strtok clone
 * @s: input string
 * @delm: delimiter
 * @currIndex: the index
 *
 * Return: a pointer to the token
 */
char *_strtok(char *s, char *delm, int *currIndex)
{
	char *W;
	int i, j, k;

	if (!s || !delm || s[*currIndex] == '\0')
		return (NULL);
	W = (char *)malloc(sizeof(char) * 10240);
	if (W == NULL)
		return (NULL);
	i = *currIndex;
	k = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (delm[j] != '\0')
		{
			if (s[i] != delm[j])
				W[k] = s[i];
			else
				goto It;
			j++;
		}
		i++;
		k++;
	}
It:
	W[k] = 0;
	*currIndex = i + 1;
	return (W);
}
