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
	size_t step = sqrt(size), current, j;

	if (array != NULL)
	{
		current = 0;
		while (current < size)
		{
			if (array[current] < value)
			{
				printf("Value checked array [%lu] = [%d]\n", current, array[current]);
			}
			if (array[current + step] >= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", current, current + step);
				for (j = current; j < size ; j++)
				{
					printf("Value checked array [%lu] = [%d]\n", j, array[j]);
					if (array[j] == value)
					{
						return (j);
					}
				}
			}
			current += step;
		}
	}
	return (-1);
}
