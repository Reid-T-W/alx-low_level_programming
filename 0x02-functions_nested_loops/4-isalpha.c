/**
 **_isalpha - returns 1 if c is an alphabet or 0 otherwise
 *@c: The character to be evaluated
 *
 * Return: On sucess 1
 **/
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
