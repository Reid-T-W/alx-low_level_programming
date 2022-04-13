#ifndef HEADER_FUNCTION_POINTER
#define HEADER_FUNCTION_POINTER
#include <stddef.h>
/**
 *print_name - prints name using function pointer
 *@name: name param
 *@f: function pointer param
 *Return: void
 */
void print_name(char *name, void (*f)(char *));
/**
 *array_iterator - executes a function parameter on every element of the array
 *@array: array to iterated
 *@size: size of array
 *@action: function parameter
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* HEADER_FUNCTION_POINTER */
