#include "main.h"
/**
 *_isdigit - returns 1 if c is a digit or 0 otherwise
 *@n: The charachter to be evaluated
 *
 *Return: On success 1
 */
int _isdigit(int n)
{
	if (n >= 0 && n <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
