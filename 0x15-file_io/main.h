#ifndef HEADER_FILEIO
#define HEADER_FILEIO
#include <stddef.h>
#include <sys/types.h>
/**
 *read_textfile - reads a text file and prints to std output
 *@filename: file to be read from
 *@letters: no of letters it should read and print
 *Return:actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters);
/**
 *create_file - function that creates a file
 *@filename: name of file
 *@text_content: content of file
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content);
#endif /* HEADER_FILEIO */
