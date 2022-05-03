#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
/**
 *read_textfile - reads a text file and prints to std output
 *@filename: file to be read from
 *@letters: no of letters it should read and print
 *Return:actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t actual_letters_write;
int file_desc;
int read_success = 0;
char *buf;

if (filename == NULL)
return (0);
buf = malloc(sizeof(size_t) * letters);
file_desc = open(filename, O_RDONLY);
if (file_desc == -1)
return (0);
read_success = read(file_desc, buf, letters);
if (read_success == -1)
return (0);
actual_letters_write = write(STDOUT_FILENO, buf, letters);
if (actual_letters_write > letters || actual_letters_write == -1)
return (0);
return (actual_letters_write);
}
