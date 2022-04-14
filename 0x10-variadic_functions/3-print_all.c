#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_all - variadic function that prints anything
 *@format: format to print in
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	size_t i = 0;
	const char *string;
	const char *form = format;
	int command;

	va_start(args, format);
	while (i < strlen(format))
	{
		command = *form;
		switch (command)
		{
			case 99:
				printf("%c", va_arg(args, int));
				break;
			case 105:
				printf("%d", va_arg(args, int));
				break;
			case 102:
				printf("%f", va_arg(args, double));
				break;
			case 115:
				string = va_arg(args, const char *);
				if (string != NULL)
					printf("%s", string);
				if (string == NULL)
					printf("(nil)");
				break;
			default:
				form++;
				i++;
				continue;
		}
		if (i != strlen(format) - 1)
			printf(", ");
		form++;
		i++;
	}
	printf("\n");
}
