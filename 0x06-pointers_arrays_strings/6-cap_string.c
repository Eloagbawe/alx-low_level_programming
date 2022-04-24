#include "main.h"
/**
 * cap_string - capitalizes every word in a string
 * @s: string to be modified
 * Return: modified string
*/
char *cap_string(char *s)
{
	int a, b;
	char alph;

	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 0;
	while (s[a] != '\0')
	{
		for (b = 0; b < 13; b++)
		{
			if (s[a] == sep[b])
			{
				alph = 'a';

				while (alph <= 'z')
				{
					if (s[a + 1] == alph)
					{
						s[a + 1] = (s[a + 1]) - 32;
					}
					alph++;
				}
			}
		}
		a++;
	}
	return (s);
}
