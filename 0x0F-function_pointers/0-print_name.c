#include "function_pointers.h"
/**
 *print_name - prints name using function pointer
 *@name: name param
 *@f: function pointer param
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name != 0)
		f(name);
	else
		return;
}
