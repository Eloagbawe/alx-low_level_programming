#include "main.h"
/**
 * print_alphabet_x10- prints the alphabet in lowercase 10 times
 * *  *   *   *   *   *   *
 * loops ten times and calls the print_alphabet function each time
 *
 * Return: runs the print alphabet function ten timesi
*/
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
}
