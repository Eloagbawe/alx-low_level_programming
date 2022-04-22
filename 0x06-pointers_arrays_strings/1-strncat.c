#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @src: string to be checked
 * @dest: string to be checked
 * @n: string length for src
 * Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, i;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[a + i] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
