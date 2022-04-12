#include "main.h"
/**
 *  *  *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    *    * Return: Always 0 (Success)
*/
int main(void)
{
char newStr[9] = "_putchar";

int i = 0;
while (newStr[i] != '\0')
{
	_putchar(newStr[i]);
	i++;
}
_putchar('\n');
return (0);
}
