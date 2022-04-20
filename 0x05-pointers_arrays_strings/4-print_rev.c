#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: string to be checked
 * Return: void
*/
void print_rev(char *s)
{
	int length;

	length = _strlen(s);
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
