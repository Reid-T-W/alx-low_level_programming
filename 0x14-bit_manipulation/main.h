#ifndef HEADER_BIT_MANIPULATION
#define HEADER_BIT_MANIPULATION
/**
 *power - calculates the power of a given number
 *@a: number
 *@b: power exponent
 *Return: returns the powers of a given number
 */
unsigned long int power(unsigned long int a, int b);
/**
 *binary_to_uint - function that converts a binary to an unsigned int
 *@b: binary
 *Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b);
/**
 *print_binary - convert number to binary
 *@n: number to be converted
 *Return: binary format
 */
void print_binary(unsigned long int n);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
#endif /* HEADER_BIT_MANIPULATION */
