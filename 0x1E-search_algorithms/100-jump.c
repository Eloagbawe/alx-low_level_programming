#include "search_algos.h"
#include "math.h"

/**
 * jump_search - searches for a value in an array of integers using
 * the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), i, j;

	if (array != NULL)
	{
		for (i = 0; i < size; i += step)
		{
			if (array[i] < value)
			{
				printf("Value checked array [%lu] = [%d]\n", i, array[i]);
			}
			if (array[i] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i - step, i);
				for (j = i - step; j <= i ; j++)
				{
					printf("Value checked array [%lu] = [%d]\n", j, array[j]);
					if (array[j] == value)
					{
						return (j);
					}
				}
			}
		}
	}
	return (-1);
}
