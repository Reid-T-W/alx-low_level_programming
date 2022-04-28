#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
/**
 *power - calculates the power of a given number
 *@a: number
 *@b: power exponent
 *Return: returns the powers of a given number
 */
int power(int a, int b)
{
int i;
int pow = a;

if (b == 0)
{
pow = 1;
}
for (i = 0; i < b - 1; i++)
{
pow = pow *a;
}
return (pow);
}
/**
 *binary_to_uint - function that converts a binary to an unsigned int
 *@b: binary
 *Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int sum = 0;
int len;
int value;
const char *c = b;

len = strlen(b);
for (i = 0; i < len; i++)
{
c = b;
value = c[len - i - 1] - '0';
if (value != 0 && value != 1)
{
return (0);
}
sum = sum + (value *power(2, i));
}
return (sum);
}
