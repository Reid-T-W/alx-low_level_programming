#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 *append_text_to_file -  a function that appends text at the end of a file
 *@filename: name of file
 *@text_content: content of file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int actual_write;
int counter = 0;
char *copy_text_content = text_content;

if (filename == NULL)
{
return (-1);
}
while (*copy_text_content != '\0')
{
counter++;
copy_text_content++;
}
fd = open(filename, O_APPEND | O_RDWR, 0661);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
actual_write = write(fd, text_content, counter);
if (actual_write == -1)
{
return (-1);
}
}
return (1);
}
