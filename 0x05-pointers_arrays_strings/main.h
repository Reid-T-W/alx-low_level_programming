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
*reset_to_98 - Updates the value a pointer points to
*@n: pointer
*
*Return: void
*/
void reset_to_98(int *n);
/**
*swap_int - swaps the values of two integers
*@a: variable_1
*@b: variable_2
*Return: void
*/
void swap_int(int *a, int *b);
/**
*_strlen - determine length of string
*@s: string
*
*Retrun: Length of string
*/
int _strlen(char *s);
/**
*_puts - prints a string
*@str: string to be printed
*
*Return: void
*/
void _puts(char *str);
/**
*print_rev - prints the reverse of a string
*@s: string to be reversed
*
*Return: void
*/
void print_rev(char *s);
/**
*rev_string - reverse string
*@s: string to be reversed
*
*Return: void
*/
void rev_string(char *s);
/**
*puts2 - prints every other character of a string
*@str: string to be printed
*
*Return: void
*/
void puts2(char *str);
/**
*puts_half - prints the second half of a string
*@str: string to be printed
*
*Return: void
*/
void puts_half(char *str);
/**
*print_array - prints the elements of an array
*@a: array to be printed
*@n: number of elements to print from the array
*Return: void
*/
void print_array(int *a, int n);
/**
*_strcpy - copies a string
*@dest: copy destination
*@src: string to copy
*Return: charcter pointer
*/
char *_strcpy(char *dest, char *src);
/**
*_atoi - convert strubg to integer
*@s - string to be converted
*
*Return: Always 0
*/
int _atoi(char *s);
#endif /* MAIN_H */
