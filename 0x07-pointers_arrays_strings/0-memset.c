#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: number
 * Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	int i = 1;

	while (i <= n)
	{
		*(p + i) = b;
		i++;

	}
	return (p);
}
