#include "main.h"
/**
 * puts_half - function that prints the second half of a string
 * @str: string to be checked
 * Return: void
*/
void puts_half(char *str)
{
	int a, b, c;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a + 1) / 2;
	}

	for (b; b < a; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n');

}
