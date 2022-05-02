#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 *create_file - function that creates a file
 *@filename: name of file
 *@text_content: content of file
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
ssize_t write_letters;
int fd;
int counter = 0;
char *copy_text_content = text_content;

if (filename == NULL)
return (-1);
while (*copy_text_content != '\0')
{
counter++;
copy_text_content++;
}

fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
write_letters = write(fd, text_content, counter);
if (write_letters == -1)
return (-1);
}
return (1);
}
