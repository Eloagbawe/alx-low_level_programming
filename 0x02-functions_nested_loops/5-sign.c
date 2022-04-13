#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 1 and '+' if number is greater than 0,
 * -1 and '-' if the number is less than 0,
 *  0 and 0 if the number is 0.
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
if (n == 0)
{
	_putchar(0 + '0');
	return (0);
}
if (n < 0)
{
	_putchar('-');
	return (-1);
}
return (0);
}
