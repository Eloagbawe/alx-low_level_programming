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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
