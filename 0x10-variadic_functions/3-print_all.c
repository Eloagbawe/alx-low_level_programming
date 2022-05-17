#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: variable format
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i;
	va_list ap;

	char a = 'c', b = 'i', c = 'f', d = 's';

	i = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == a)
		{
			printf("%c, ", va_arg(ap, int));
		}
		else if (format[i] == d)
		{
			const char * const p = va_arg(ap, char*);

			if (p == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s, ", p);
			}
		}
		else if (format[i] == b)
		{
			printf("%d, ", va_arg(ap, int));
		}
		else if (format[i] == c)
		{
			printf("%f, ", va_arg(ap, double));
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
