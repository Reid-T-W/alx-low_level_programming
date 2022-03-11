#include <stdio.h>
/**
*main - Entry point
*Return: Always  (Success)
**/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
