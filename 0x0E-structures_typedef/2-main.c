#include <stdio.h>
#include "dog.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	struct dog my_dog = 0;

	        my_dog.name = 0;
		    my_dog.age = 0;
		        my_dog.owner = 0;
			    print_dog(&my_dog);
			        return (0);
}
