#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - determine the correct operation to be performed
 * @s: operation to be evaluated
 * Return: Function Pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op != NULL && s != NULL && *s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
