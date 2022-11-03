#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t i = 0, j = 0;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	while (j < size && value > array[j])
	{
		i = j;
		j = i + step;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);
	while (i < size && i <= j)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i += 1;
	}
	return (-1);
}
