#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
*/
void rev_string(char *s)
{
	int a, b, c;
	char str;

	a = 0;
	c = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = a - 1; c < b; b--)
	{
		str = s[c];
		s[c] = s[b];
		s[b] = str;
		c++;
	}
}
