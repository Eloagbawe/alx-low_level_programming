#include <stdio.h>
/**
 *  * main - main block
 *  * Description: prints fibonacci sequence from 0 to 98
 *  * Return: 0
*/
int main(void)
{
int i = 0;
unsigned long int a = 0, b = 1, next = 0;

while (i < 98)
{
	next = a + b;
	a = b;
	b = next;
	printf("%lu", next);
	if (i < 97)
	{
		printf(", ");
	}
	i++
}
putchar('\n');
return (0);
}
