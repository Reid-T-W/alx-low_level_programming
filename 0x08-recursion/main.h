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
/**
*factorial - calculates the factorial of a number using recursion
*@n: the number
*
*Return: the factorial of a number
*/
int factorial(int n);
/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: parameter
*@y: parameter
*Return: returns the value of x rasied to y
*/
int _pow_recursion(int x, int y);
#endif /* MAIN_H */
