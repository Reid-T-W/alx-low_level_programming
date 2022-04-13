#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - adding operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_add(int a, int b)
{
	return(a + b);
}
/**
 *op_sub - subtraction operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_sub(int a, int b)
{
	return(a - b);
}
/**
 *op_mul - multiplication operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_mul(int a, int b)
{
	return(a * b);
}
/**
 *op_div - division operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a / b);
}
/**
 *op_mod - modules operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_mod(int a, int b)
{
	 if (b == 0)
	 {
		 printf("Error\n");
		 exit(100);
	 }
	return(a % b);
}
