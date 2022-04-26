#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: src
 * @n: number of bytes to be copied
 * Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	char *a = src;
	char *b = dest;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	return (b);
}
