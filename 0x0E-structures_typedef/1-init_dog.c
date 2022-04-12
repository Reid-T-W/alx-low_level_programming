#include "dog.h"
/**
 *init_dog - function for initializing the struct dog
 *@d:param
 *@name: param
 *@age: param
 *@owner: param
 *Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
