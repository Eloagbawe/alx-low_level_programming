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
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error");
			printf("\n");
			return (1);

		}
		sum += atoi(argv[i]);
	}
	printf("%d", sum);
	printf("\n");
	}
	else
	{
		printf("%d", 0);
		printf("\n");
	}
	return (0);

}
