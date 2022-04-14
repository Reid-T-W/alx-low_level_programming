#ifndef HEADER_VARIADIC_FUNCTIONS
#define HEADER_VARIADIC_FUNCTIONS
/**
 *sum_them_all - returns the sum of all parameters
 *@n: number of parameters
 *Return: 0 upon success
 */
int sum_them_all(const unsigned int n, ...);
/**
 *print_numbers - variadic functions that prints numbers
 *@separator: string to be printed between numbers
 *@n:number of integers
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 *print_strings - variadic functions that prints strings
 *@separator: string to be printed between numbers
 *@n:number of integers
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);
#endif /* HEADER_VARIADIC_FUNCTIONS */
