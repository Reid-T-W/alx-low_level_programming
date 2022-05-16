#include "main.h"

/**
 * free_array - frees all elements of
 * an array before index j
 * @arr: the array
 * @j: the index
 *
 * Return: a void pointer
 */
void *free_array(char **arr, int j)
{
	int i;

	for (i = 0; i < j; i++)
		free(arr[i]);
	free(arr);
	return (NULL);
}
