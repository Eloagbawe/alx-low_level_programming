#include <stdio.h>
#include "main.h"
/**
 * main - main entry
 * Return: 0
*/
int main(void)
{
int i, sum;
for (i = 1; i < 1024; i++)
{
	if ((i % 5 == 0) || (i % 3 == 0))
	{
		sum = sum + i;
	}
}
printf("%d", sum);
printf("\n");
return (0);
}
