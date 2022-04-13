#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - executes a function parameter on every element of the array
 *@array: array to iterated
 *@size: size of array
 *@action: function parameter
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
