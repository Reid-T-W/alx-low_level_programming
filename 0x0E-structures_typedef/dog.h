#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 *init_dog - function for initializing the struct dog
 *@d:param
 *@name: param
 *@age: param
 *@owner: param
 *Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 *print_dog - print the values of struct dog
 *@d:param
 *
 *
 *Return: Always 0
 */
void print_dog(struct dog *d);
#endif /* DOG_HEADER */
