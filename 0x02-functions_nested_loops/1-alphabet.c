#include "main.h"
/**
 *  *  *  *   *  *  * main - Entry point
 *   *   *   *   *   *
 *  *    *    *    *    * Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return (0);
}

/**
 *  print_alphabet - prints the alphabet in lowercase
 *  *   *   *   *   *   *
 *  loops through all the letters of the alphabet in lowercase
 *  and prints each one
 *
 *  Return: all the letters in the alphabet followed by a new line
*/
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
_putchar('\n');
}
