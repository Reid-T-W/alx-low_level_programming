#include "hash_tables.h"
/**
 *key_index - determines the index of a key
 *@key: key used to determine the index
 *@size: size of the array
 *Return: key value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return index;
}

