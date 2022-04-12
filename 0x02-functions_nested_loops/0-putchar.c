#include <stdio.h>
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
	putchar(newStr[i]);
	i++;
}
putchar('\n');
return (0);
}
