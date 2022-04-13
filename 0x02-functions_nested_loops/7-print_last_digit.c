#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: the last digit of n
*/
int print_last_digit(int n)
{
int j;
if (n < 0)
{
	j = (n * -1) % 10;
	_putchar(j + '0');
	return (j);
}
j = n % 10;
_putchar(j + '0');
return (j);
}
