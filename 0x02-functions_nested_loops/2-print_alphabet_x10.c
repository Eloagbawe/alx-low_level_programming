#include "main.h"
/**
 * print_alphabet_x10- prints the alphabet in lowercase 10 times
 * *  *   *   *   *   *   *
 * loops ten times and calls the print_alphabet function each time
 *
 * Return: all the letters in the alphabet followed by a new line
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
print_alphabet();
i++;
}
_putchar('\n');
}
