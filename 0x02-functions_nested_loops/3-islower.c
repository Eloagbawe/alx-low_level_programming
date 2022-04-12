#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 * * * * * * * * * * * * * * * *
 * loops through lower case letters and returns
 * a value
 *
 * Return: 1 if the character is lowercase. 0 otherwise
*/
int _islower(int c)
{
char j;

for (j = 'a'; j < 'z'; j++)
{
	if (c == j)
	{
		return (1);
	}
}
return (0);
}
