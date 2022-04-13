#include <stdio.h>
#include "main.h"
/**
 * natural_sum - sum of multiples of 3 and 5 below 1024
 * Return: sum of multiples of 3 and 5 below 1024
*/
int natural_sum(void)
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
return (sum);
}
