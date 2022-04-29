#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: number
 *@index: index
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int length = 0;
unsigned long int n_length = n;
while (n_length > 0)
{
length++;
n_length = n_length >> 1;
}
n = n >> index;
if ((n & 1) == 0)
return (0);
else if ((n & 1) == 1)
return (1);
else if (index >= length)
return (-1);
else
return (-1);
}
