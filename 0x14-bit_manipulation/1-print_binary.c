#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *power - calculates the power of a given number
 *@a: number
 *@b: power exponent
 *Return: returns the powers of a given number
 */
unsigned long int power(unsigned long int a, int b)
{
int i;
unsigned long int pow = a;

if (b == 0)
{
pow = 1;
}
for (i = 0; i < b - 1; i++)
{
pow = pow * a;
}
return (pow);
}
/**
 *print_binary - convert number to binary
 *@n: number to be converted
 *Return: binary format
 */
void print_binary(unsigned long int n)
{
int counter = 0;
unsigned long int n_length = n;
unsigned long int checker = 0;
int i = 1;

if (n == 0)
_putchar('0');
while (n_length > 0)
{
counter++;
n_length = n_length >> 1;
}
while (i <= counter)
{
checker = power(2, counter - i);
if ((n & checker) == 0)
{
_putchar('0');
}
else
{
_putchar('1');
}
i++;
}
}
