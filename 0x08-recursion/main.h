#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
*_puts_recursion - prints a string, followed by a new line
*@s: parameter
*
*Return: void
*/
void _puts_recursion(char *s);
/**
*_print_rev_recursion - prints a string in reverse
*@s: string to be printed in reverse
*
*Return: void
*/
void _print_rev_recursion(char *s);
/**
*_strlen_recursion - return the length of a string
*@s: string
*
*Return: the lenght of the string
*/
int _strlen_recursion(char *s);
#endif /* MAIN_H */
