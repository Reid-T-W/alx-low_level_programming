#include "main.h"

/**
 * free_entire_arr - frees the entire array
 * @arr: the array
 *
 * Return: void
 */
void free_entire_arr(char **arr)
{
	int i;

	for (i = 0; arr[i]; i++)
		free(arr[i]);
	free(arr);
}
