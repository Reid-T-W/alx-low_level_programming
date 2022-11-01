#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
 *jump_search - searches a value using jump search algo
 *@array: array to be searched
 *@size: size of the array
 *@value: value of to be searched
 *Return: if found its index else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t point = 0;
	size_t prev = 0;


	if (array == 0)
		return (-1);
	/*Perform jump until value is greater than values in the array*/
	while (value > array[point] && point < size)
	{
		printf("Value checked array[%ld] = [%d]\n", point, array[point]);
		prev = point;
		point = point + jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, point);

	/*Perform backward propagation until the element is found*/
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev >= size)
			return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	else
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (-1);
	}
}
