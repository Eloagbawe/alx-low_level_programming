#include <stdio.h>
/**
 * main - checks for numbers less than 100 and are divisible by 5 and 3
 * Return: void
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
	if ((i % 5) == 0 && (i % 3) == 0)
	{
		printf("%s", "FizzBuzz");
	}
	else if (i % 5 == 0)
	{
		printf("%s", "Buzz");
	}
	else if (i % 3 == 0)
	{
		printf("%s", "Fizz");
	}
	else
	{
		printf("%d", i);
	}
printf(" ");
}
printf("\n");
return (0);
}
