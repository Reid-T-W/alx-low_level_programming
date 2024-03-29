#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: number
 *@index: index
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int length = sizeof(unsigned long int) * 8;

if (index >= length)
return (-1);
n = n >> index;
if ((n & 1) == 0)
return (0);
else if ((n & 1) == 1)
return (1);
else
return (-1);
}
