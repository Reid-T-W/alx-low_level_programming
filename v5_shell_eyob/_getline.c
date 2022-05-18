#include "main.h"

#define BUFSZ 1024

/**
 * _getline - reads one line from stdin
 * @buf: the buffer for storing the line
 * @sz: the number of bytes to be read
 *
 * Return: the number of bytes read
 */
ssize_t _getline(char *buf, size_t sz)
{
	int fd;
	ssize_t nchr = 0;
	ssize_t idx = 0;
	char *p = NULL;

	fd = STDIN_FILENO;
	/* position fd & read line */
	nchr = read(fd, buf, sz);
	if (nchr == -1)
	{   /* read error   */
		perror("Error: Couldn't read from stdin");
		return (nchr);
	}
	/* end of file - no chars read (not an error, but return -1)*/
	if (nchr == 0)
		return (-1);
	p = buf;    /* check each char */
	while (idx < nchr && *p != '\n')
	{
		p++;
		idx++;
	}
	*p = 0;
	return (idx);
}
