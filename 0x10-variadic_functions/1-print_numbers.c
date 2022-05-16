#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: separator
 * @n: number of arguments
 * Return: list of numbers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
	{
		return;
	}

	i = 0;

	va_start(ap, n);

	while (i < (n - 1))
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);
	printf("\n");
}
