#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 * @argc: number of parameters
 * @argv: parameters
 * Return: Returns 0
 */
int main(int argc, char *argv[])
{
	int first;
	char *operator;
	int second;
	char *s;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	first = atoi(argv[1]);
	operator = argv[2];
	second = atoi(argv[3]);
	s = operator;
	if (get_op_func(s) == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*s == '/' || *s == '%') && second == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(s)(first, second);
	printf("%d\n", result);
	return (0);
}
