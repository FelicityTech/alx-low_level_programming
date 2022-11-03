#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using
 * the Jump search algorithm
 * @list: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step = 0, i = 0;
	listint_t *tmp = NULL;

	if (list && size > 0)
	{
		step = sqrt(size);
		while (value > list->n && list->next)
		{
			tmp = list;
			for (i = 0; i < step && list->next; i++)
				list = list->next;
			printf("Value checked at index [%ld] = [%d]\n", list->index,
			       list->n);
		}
		printf("Value found between indexes [%ld] and [%ld]\n",
		       tmp->index, list->index);
		while (tmp && tmp->index <= list->index)
		{
			printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
			if (value == tmp->n)
				return (tmp);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
