#include "search_algos.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 *find_min - finds min value
 *@point: to be compared with size
 *@size: to be compared with point
 *Return: point if its greater than size or the opposite
 */
size_t find_min(size_t point, size_t size)
{
	if (point < size)
		return (point);
	return (size);
}

/**
 *jump_search - searches a value using jump search algo
 *@array: array to be searched
 *@size: size of the array
 *@value: value of to be searched
 *Return: if found its index else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev = 0;
	size_t point = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	/*Perform jump until value is greater than values in the array*/
	printf("Value checked array[%ld] = [%d]\n", point, array[point]);
	point = jump;
	while (array[find_min(point, size - 1)] < value && point < size)
	{
		printf("Value checked array[%ld] = [%d]\n", find_min(point, size - 1),
			array[find_min(point, size - 1)]);
		prev = point;
		point = point + jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, point);

	/*Perform forward propagation until the element is found*/
	while (array[prev] <= (int) point && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		if (prev == find_min(point, size))
			return (-1);
		prev++;
	}
	return (-1);
}
