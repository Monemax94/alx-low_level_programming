#include "search_algos.h"


/**
 * linear_search - searches for a value in an array of
 * integers using the linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: the element or value to be looked for
 *
 * Return: the index of the found value,
 * or -1 if no value is found or the array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
