#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of arguments
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	i = 0;
	va_start(ap, n);

	while (i < n)
	{
		const char * const p = va_arg(ap, char *);

		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("nil");
		}

		if ((separator != NULL) && (i < (n - 1)))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
