#include "search_algos.h"

/**
 * interpolation_search - pointer to the first element of the array to search
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos = 0;

	if (array)
	{
		while (array[low] != array[high])
		{
			pos = low + (((double)(high - low)
				      / (array[high] - array[low]))
				     * (value - array[low]));
			if (pos < low || pos > high)
			{
				printf("Value checked array[%lu] is out of range\n", pos);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[pos] < value)
				low = pos + 1;
			else if (array[pos] > value)
				high = pos - 1;
			else
				return (pos);
		}
	}
	return (-1);
}
