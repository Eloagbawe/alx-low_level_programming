#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to be checked
 * Return: integer
*/
int _atoi(char *s)
{
	int sign = 1, resp = 0, firstNum, i;

	if (*s == '\0')
	{
		return (0);
	}

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		/*
		 * resp *= 10;
		 * resp += (s[i] - 48);
		*/
		resp = (resp * 10) + s[i] - '0';
	}

	return (sign * resp);
}
