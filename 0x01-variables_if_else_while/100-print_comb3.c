#include <stdio.h>
/**
 *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    * Return: Always 0 (Success)
*/
int main(void)
{
int a;
int b;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		if (b > a)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			putchar(',');
		}
	}
}
putchar('\n');
return (0);
}
