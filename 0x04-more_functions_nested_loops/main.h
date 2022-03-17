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
#endif /* MAIN_H */
