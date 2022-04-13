#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to be checked
 * Return: 1 if character is an alphabet. 0 otherwise
*/
int _isalpha(int c)
{
char a, b;
for (a = 'A'; a <= 'Z'; a++)
{
for (b = 'a'; b <= 'z'; b++)
{
	if (a == c || b == c)
	{
		return (1);
	}
}
}
return (0);
}
