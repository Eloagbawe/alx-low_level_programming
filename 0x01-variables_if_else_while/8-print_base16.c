#include <stdio.h>
/**
 *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *
 *    *    *    *    *    *    * Return: Always 0 (Success)
*/
int main(void)
{
char alphabet;
int x;

for (x = 0; x < 10; x++)
{
	putchar((x % 10) + '0');
}
for (alphabet = 'A'; alphabet <= 'F'; alphabet++)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
