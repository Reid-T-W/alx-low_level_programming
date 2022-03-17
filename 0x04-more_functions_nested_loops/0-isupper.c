#include "main.h"
/**
 *_islower - returns 1 if c is upper case or 0 otherwise
 *@c: The charachter to be evaluated
 *
 *Return: On success 1
 **/
int _isupper(int c);
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
