#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 *_isupper - returns 1 if c is upper case or 0 otherwise
 *@c: The charachter to be evaluated
 *
 *Return: On success 1
 */
int _isupper(int c);

#include "main.h"
/**
 *_isdigit - returns 1 if c is a digit or 0 otherwise                                                    *@n: The charachter to be evaluated                                                                     *
 *Return: On success 1
 */
int _isdigit(int n);
/**
 *mul -  multiples two integers
 *@a: variable 1
 *@b: variable 2
 *
 *Return: The multiplication value
 */
int mul(int a, int b);
#include "main.h"
/**
 *print_numbers - prints numbers 0 to 9
 *
 *Return: void
 */
void print_numbers(void);

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 *print_most_numbers - prints numbers 0 to 9 except 2 and 4                                              *
 *
 *Return: void
 */
void print_most_numbers(void);
/**
 *more_numbers - prints numbers 0 to 14 ten times                                                        *
 *
 *Return: void
 **/
void more_numbers(void);
/**
 *print_line - Print a straight line
 *@n: Length of the line
 *
 *Return: void
 */
void print_line(int n);
/**
 *print_diagonal - Prints a diagonal line
 *@n: Length of the line
 *
 *Return: void
 **/
void print_diagonal(int n);
/**
 *print_square - prints squares
 *@size: size of the square
 *
 *Return: void
 */
void print_square(int size);
#endif /* MAIN_H */
