#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*_strcpy - copies a string
*@dest: copy destination
*@src: string to copy
*Return: charcter pointer
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
