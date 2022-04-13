#include <stdio.h>
#include "main.h"
/**
 *  print_to_98 - print any number from n to 98
 *  @n: number to be checked
 *  Return: sequence of numbers from n to 98
*/
void print_to_98(int n)
{
int i;
if (n == 98)
{
	printf("%d", n);
}
if (n > 98) 
{
	for (i = n; i > 97; i--)
	{
		printf("%d", i);
		if(i != 98)
		{
			printf(", ");
		}
	}
}
if ( n < 98)
{
	for (i = n; i < 99; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
printf("%c", '\n');
}
