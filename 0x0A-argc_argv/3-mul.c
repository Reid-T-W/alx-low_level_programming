#include <stdlib.h>
#include <stdio.h>
/**
*main - program that prints the arguments
*@argc: param
*@argv: param
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("%s\n", "Error");
	return (1);
}
