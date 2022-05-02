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
#endif /* HEADER_FILEIO */
