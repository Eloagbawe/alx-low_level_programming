#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: bytes to check
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}

		}
	}

	return (0);
}
