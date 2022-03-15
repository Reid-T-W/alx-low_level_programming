/**
 *print_alphabet - prints the alphabet in lower case
 *
 *Return: Always 0.
 * */

void print_alphabet(void);

void print_alphabet(void)
{
	for (int i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
