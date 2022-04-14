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
/**
 *print_all - variadic function that prints anything
 *@format: format to print in
 *Return: void
 */
void print_all(const char * const format, ...);
/**
 *find_command - find the coommand
 *@command: parameter
 *Return: void
 */
void find_command(int command);
/**
 *find_command - find the command
 *@i: param
 *@format_len: param
 *@form: param
 *@args: param
 *@command: parameter
 *Return: void
 */
void find_command(int i, int format_len, int command, const char *form, va_list args);
#endif /* HEADER_VARIADIC_FUNCTIONS */
