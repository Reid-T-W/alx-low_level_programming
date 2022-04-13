#ifndef HEADER_FUNCTION_POINTER
#define HEADER_FUNCTION_POINTER
/**
 *print_name - prints name using function pointer
 *@name: name param
 *@f: function pointer param
 *Return: void
 */
void print_name(char *name, void (*f)(char *));
#endif /* HEADER_FUNCTION_POINTER */
