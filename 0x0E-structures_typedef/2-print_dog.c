#include "dog.h"
#include <stdio.h>
/**
 *print_dog - print the values of struct dog
 *@d:param
 *
 *
 *Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	else
	{
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else if (d->name == 0)
			printf("Name: (nil)\n");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else if (d->age == 0)
			printf("Age: (nil)\n");
		if (d->owner != 0)
			printf("Owner: %s\n", d->owner);
		else if  (d->owner == 0)
			printf("Owner: (nil)\n");
	}
}
