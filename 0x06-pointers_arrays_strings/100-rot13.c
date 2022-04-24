#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to be modified
 * Return: modified string
*/
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = i;
		while ((((s[i] >= 65) && (s[i] <= 90)) || ((s[i] >= 97)
			&& (s[i] <= 122))) && (j <= i))
		{
			if (((s[i] < 78) && (s[i] >= 65)) ||
				((s[i] < 110) && (s[i] >= 97)))
			{
				s[i] = s[i] + 13;
			}
			else
			{
				 s[i] = s[i] - 13;
			}
			j++;
		}
	}
	return (s);

}
