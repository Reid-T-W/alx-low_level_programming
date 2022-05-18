#include "main.h"

/**
 * readline - reads one line at a time from file
 * @buf: the buffer for storing the line
 * @sz: the number of bytes to be read
 * @fn: the file to be read from
 * @offset: the offset
 *
 * Return: the number of bytes read
 */
ssize_t readline(char *buf, size_t sz, char *fn, off_t *offset)
{
	int fd;
	ssize_t nchr = 0;
	ssize_t idx = 0;
	char *p = NULL, *temp;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		perror("Error: Couldn't open file");
		return (-1);
	}
	/* position fd & read line */
	temp = malloc(sizeof(char) * (*offset));
	if (temp == NULL)
		return (-1);
	nchr = read(fd, temp, *offset);
	free(temp);
	if (nchr == -1)
		return (-1);
	nchr = read(fd, buf, sz);
	close(fd);
	if (nchr == -1)	/* read error   */
		return (nchr);
	/* end of file - no chars read (not an error, but return -1)*/
	if (nchr == 0)
		return (-1);
	p = buf;    /* check each char */
	while (idx < nchr && *p != '\n')
		p++, idx++;
	*p = 0;
	if (idx == nchr)
	{  /* newline not found  */
		*offset += nchr;
	/* check file missing newline at end */
		return (nchr < (ssize_t)sz ? nchr : 0);
	}
	*offset += idx + 1;
	return (idx);
}
/**
 * exec_file - executes commands from a file
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: void
 */
void exec_file(int ac, char **av)
{
	char **cmds, line[BUFSZ] = {0};
	ssize_t nread = 0;
	off_t offset = 0;
	int i;

	if (ac != 2)
	{
		perror("Error: invalid number of arguments");
		exit(EXIT_FAILURE);
	}
	while ((nread = readline(line, BUFSZ, av[1], &offset)) != -1)
	{
		cmds = makeCmds(line);
		if (cmds == NULL)
		{
			perror("Error: failed to create commmands");
			continue;
		}
		exec_cmds(cmds);
		free_entire_arr(cmds);
		for (i = 0; i < BUFSZ; i++)
			line[i] = '\0';
	}
	exit(EXIT_SUCCESS);
}
