#include "search_algos.h"

/**
 * binary_s - helper function for the advanced binary search
 * @array: array to be checked
 * @value: value to be checked
 * @start: start index of the array
 * @end: end index of the array
 * Return: first index value is found
*/
int binary_s(int *array, int value, int start, int end)
{
	int middle, print_start;

	if (start > end)
	{
		return (-1);
	}
	else
	{
		middle = start + (end - start) / 2;
		printf("Searching in array: ");
		print_start = start;
		while (print_start <= end)
		{
			printf("%d", array[print_start]);
			if (print_start < (end))
				printf(", ");
			print_start++;
		}
		printf("\n");
		if (value == array[middle - 1])
		{
			return (binary_s(array, value, start, middle));
		}
		else if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			return (binary_s(array, value, middle + 1, end));
		}
		else
		{
			return (binary_s(array, value, start, middle - 1));
		}
	}
}
/**
 * advanced_binary - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end;

	if (array != NULL && size > 0)
	{
		start = 0;
		end = size - 1;
		return (binary_s(array, value, start, end));
	}
	return (-1);
}
