#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to be checked
 * @c: character
 * Return: character
*/
char *_strchr(char *s, char c)
{
	int i;
	char *d = s;
	char *null = '\0';

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			return (d + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (d + i);
	}
	else
	{
		return (null);
	}
}
