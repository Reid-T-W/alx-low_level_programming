#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
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
#endif /* MAIN_H */
