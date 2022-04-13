#include "function_pointers.h"
/**
 *int_index - Function that searches for an integer
 *@array: array to be searched
 *@size: size of array
 *@cmp: function parameter
 *Return: Returns index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int check;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
		{
			return (i);
		}
	}
	return (-1);
}
