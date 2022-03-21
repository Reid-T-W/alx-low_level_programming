/**                                                           *swap_int - swaps the values of two integers
 * *@a: variable_1                                               *@b: variable_2                                               *Return: void                                                 */
void swap_int(int *a, int *b)
{
	int *c;

	c = a;
	a = b;
	b = c;
}
