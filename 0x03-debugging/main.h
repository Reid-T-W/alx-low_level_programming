#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int n);
/**
 *largest_number - returns the largest 3 numbers
 *@a: first integer
 *@b: second integer
 *@c: third integer
 *Return: largest number
 */
int largest_number(int a, int b, int c);
 /**
 *print_remaining_days - takes a date and prints how many days are
 *left in the year, taking leap years into account
 *@month: month in number format
 *@day: day of month
 *@year: year
 *Return: void
 */
void print_remaining_days(int month, int day, int year);
#endif /* MAIN_H */
