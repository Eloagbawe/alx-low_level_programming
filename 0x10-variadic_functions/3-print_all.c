#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: variable format
 * Return: void
*/

void print_all(const char * const format, ...)
{
	char a, b, c, d;
	int i;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		printf("%c\n", *(format + i));
		i++;
	}

	va_end(ap);
}
