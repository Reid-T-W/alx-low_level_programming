#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: number
 *@index: index
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (n == 0)
return (0);
n = n >> index;
if (n == 0)
return (-1);
if ((n & 1) == 0)
return (0);
else if ((n & 1) == 1)
return (1);
else
return (-1);
}
