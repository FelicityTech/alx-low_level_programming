#include "search_algos.h"
/**
 * @brief  Linear_Search - Searches for a value in an array
                            of integers using linear search.
 * @param array: A pointer to the first element of the array to search.n
 * @param size: The number of elements in the array.
 * @param value: The value to search for.
 * @return int: if value is not present in array or if array is NULL,
                your function must return -1.
 * Description: Print a value every time you it is compared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array == NULL)
            return (-1);

    for (i = 0; i < size; i++)
    {
        printf("value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
                return (i);
    }
    return (-1);
}
