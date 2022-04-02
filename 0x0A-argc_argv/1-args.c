#include <stdlib.h>
#include <stdio.h>
/**
*main - program that prints the name of the program
*@argc: param
*@argv: param
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		argv[0] = argv[1];
		i++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
