#include "main.h"
/**
 *_islower - returns 0 if c is lowercase or otherwise
 *@c: The character to be evaluated
 *
 *Return: On success 1.
 **/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
