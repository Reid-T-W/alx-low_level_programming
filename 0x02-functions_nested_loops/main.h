/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c);
/**
 *print_alphabet - prints the alphabet in lower case
 *
 *Return: Always 0.
 * */
void print_alphabet(void);
/**
 * print_alphabet-x10(void) - prints the alphabet in lower case 10 times
 *
 * Return: Void
 **/
void print_alphabet_x10(void);
/**
*_islower - returns 1 if c is lowe case or 0 otherwise
*@c: The charachter to be evaluated
*
*Return: On success 1
**/
int _islower(int c);
/**
 *_isalpha - returns 1 if c is an alphabet or 0 otherwise
 *@c: The character to be evaluated
 *
 * Return: On sucess 1
 **/
int _isalpha(int c);
/**
 * print_sign - Prints the sign of a number
 * @n: The integer to be evaluated
 *
 * Return: If positive returns 1, if negative returns -1, and if zero it returns 0
**/
int print_sign(int n);

