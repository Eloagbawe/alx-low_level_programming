#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry point
 * @argc: number of parameters
 * @argv: array of parameters
 * Return: always success
*/
int main(int argc, char *argv[])
{
	int i, sum, charSum;

	sum = 0;
	charSum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);

		}
		else
		{
			charSum += 1;
		}
	}
	}
	if ((argc > 1) && (sum > 0) && (charSum == 0))
	{
		printf("%d", sum);
		printf("\n");
	}
	if (((argc > 1) && (sum == 0) && (charSum > 0)) || (argc == 1))
	{
		printf("%d", 0);
		printf("\n");
	}
	if ((argc > 1) && (sum > 0) && (charSum > 0))
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);

}
