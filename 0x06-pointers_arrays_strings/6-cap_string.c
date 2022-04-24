#include "main.h"
/**
 * cap_string - capitalizes every word in a string
 * @s: string to be modified
 * Return: modified string
*/
char *cap_string(char *s)
{
	int a;
	char alph;

	a = 0;

	while (s[a] != '\0')
	{
		if ((s[a] == 32) || (s[a] == 9) || (s[a] == 10)
			|| (s[a] == 44) || (s[a] == 59) ||
			(s[a] == 46) || (s[a] == 33) ||
			(s[a] == 63) || (s[a] == 34) ||
			(s[a] == 40) || (s[a] == 41) ||
			(s[a] == 123) || (s[a] == 125))
		{
			alph = 'a';

			while (alph <= 'z')
			{
				if (s[a + 1] == alph)
				{
					s[a + 1] = s[a + 1] - 32;
				}
				alph++;
			}
		}
		a++;
	}
	return (s);
}
